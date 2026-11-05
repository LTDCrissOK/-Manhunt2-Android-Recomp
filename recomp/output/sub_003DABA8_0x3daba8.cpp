#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003DABA8
// Address: 0x3daba8 - 0x3dac48
void sub_003DABA8_0x3daba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DABA8_0x3daba8");
#endif

    switch (ctx->pc) {
        case 0x3dabd4u: goto label_3dabd4;
        case 0x3dabf4u: goto label_3dabf4;
        default: break;
    }

    ctx->pc = 0x3daba8u;

    // 0x3daba8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3daba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3dabac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3dabacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3dabb0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3dabb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3dabb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3dabb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dabb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3dabb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3dabbc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3dabbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3dabc0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3dabc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3dabc4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DABC4u;
    {
        const bool branch_taken_0x3dabc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DABC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DABC4u;
        // 0x3dabc8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dabc4) {
            ctx->pc = 0x3DABE8u;
            goto label_3dabe8;
        }
    }
    ctx->pc = 0x3DABCCu;
    // 0x3dabcc: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DABCCu;
    SET_GPR_U32(ctx, 31, 0x3DABD4u);
    ctx->pc = 0x3DABD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DABCCu;
    // 0x3dabd0: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DABCCu, 0x3DABD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DABD4u;
label_3dabd4:
    // 0x3dabd4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3dabd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x3dabd8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3dabd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3dabdc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3dabdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x3dabe0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3DABE0u;
    {
        const bool branch_taken_0x3dabe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DABE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DABE0u;
        // 0x3dabe4: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dabe0) {
            ctx->pc = 0x3DAC04u;
            goto label_3dac04;
        }
    }
    ctx->pc = 0x3DABE8u;
label_3dabe8:
    // 0x3dabe8: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x3dabe8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3dabec: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DABECu;
    SET_GPR_U32(ctx, 31, 0x3DABF4u);
    ctx->pc = 0x3DABF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DABECu;
    // 0x3dabf0: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DABECu, 0x3DABF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DABF4u;
label_3dabf4:
    // 0x3dabf4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3dabf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3dabf8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3dabf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3dabfc: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x3dabfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x3dac00: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3dac00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3dac04:
    // 0x3dac04: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3dac04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3dac08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3dac08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dac0c: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x3dac0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x3dac10: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3dac10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dac14: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3dac14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3dac18: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3dac18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3dac1c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3dac1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3dac20: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3dac20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3dac24: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3dac24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3dac28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3dac28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3dac2c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DAC2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DAC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAC2Cu;
        // 0x3dac30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DAC2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DAC34u;
    // 0x3dac34: 0x0  nop
    ctx->pc = 0x3dac34u;
    // NOP
    // 0x3dac38: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3dac38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3dac3c: 0x0  nop
    ctx->pc = 0x3dac3cu;
    // NOP
    // 0x3dac40: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3dac40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3dac44: 0x0  nop
    ctx->pc = 0x3dac44u;
    // NOP
    ctx->pc = 0x3dac48u;
}
