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

// Function: sub_002DAB80
// Address: 0x2dab80 - 0x2dac10
void sub_002DAB80_0x2dab80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DAB80_0x2dab80");
#endif

    switch (ctx->pc) {
        case 0x2dabb0u: goto label_2dabb0;
        case 0x2dabc8u: goto label_2dabc8;
        case 0x2dabd4u: goto label_2dabd4;
        case 0x2dabf4u: goto label_2dabf4;
        default: break;
    }

    ctx->pc = 0x2dab80u;

    // 0x2dab80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dab80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dab84: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2dab84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2dab88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2dab88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2dab8c: 0x24423e18  addiu       $v0, $v0, 0x3E18
    ctx->pc = 0x2dab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15896));
    // 0x2dab90: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2dab90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2dab94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2dab94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dab98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dab98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dab9c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2dab9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daba0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2daba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2daba4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2daba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2daba8: 0xc0b6b06  jal         func_2DAC18
    ctx->pc = 0x2DABA8u;
    SET_GPR_U32(ctx, 31, 0x2DABB0u);
    ctx->pc = 0x2DABACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DABA8u;
    // 0x2dabac: 0xae220a04  sw          $v0, 0xA04($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2564), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAC18u, 0x2DABA8u, 0x2DABB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DABB0u;
label_2dabb0:
    // 0x2dabb0: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x2dabb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2dabb4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2DABB4u;
    {
        const bool branch_taken_0x2dabb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DABB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DABB4u;
        // 0x2dabb8: 0x26300a04  addiu       $s0, $s1, 0xA04 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 2564));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dabb4) {
            ctx->pc = 0x2DABE0u;
            goto label_2dabe0;
        }
    }
    ctx->pc = 0x2DABBCu;
    // 0x2dabbc: 0x10500008  beq         $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DABBCu;
    {
        const bool branch_taken_0x2dabbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2DABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DABBCu;
        // 0x2dabc0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dabbc) {
            ctx->pc = 0x2DABE0u;
            goto label_2dabe0;
        }
    }
    ctx->pc = 0x2DABC4u;
    // 0x2dabc4: 0x2610ffec  addiu       $s0, $s0, -0x14
    ctx->pc = 0x2dabc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
label_2dabc8:
    // 0x2dabc8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2dabc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2dabcc: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2DABCCu;
    SET_GPR_U32(ctx, 31, 0x2DABD4u);
    ctx->pc = 0x2DABD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DABCCu;
    // 0x2dabd0: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2DABCCu, 0x2DABD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DABD4u;
label_2dabd4:
    // 0x2dabd4: 0x0  nop
    ctx->pc = 0x2dabd4u;
    // NOP
    // 0x2dabd8: 0x1650fffb  bne         $s2, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2DABD8u;
    {
        const bool branch_taken_0x2dabd8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x2DABDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DABD8u;
        // 0x2dabdc: 0x2610ffec  addiu       $s0, $s0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dabd8) {
            ctx->pc = 0x2DABC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dabc8;
        }
    }
    ctx->pc = 0x2DABE0u;
label_2dabe0:
    // 0x2dabe0: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x2dabe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x2dabe4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DABE4u;
    {
        const bool branch_taken_0x2dabe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DABE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DABE4u;
        // 0x2dabe8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dabe4) {
            ctx->pc = 0x2DABF8u;
            goto label_2dabf8;
        }
    }
    ctx->pc = 0x2DABECu;
    // 0x2dabec: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2DABECu;
    SET_GPR_U32(ctx, 31, 0x2DABF4u);
    ctx->pc = 0x2DABF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DABECu;
    // 0x2dabf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2DABECu, 0x2DABF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DABF4u;
label_2dabf4:
    // 0x2dabf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dabf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2dabf8:
    // 0x2dabf8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2dabf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dabfc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2dabfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dac00: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2dac00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2dac04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2dac04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dac08: 0x3e00008  jr          $ra
    ctx->pc = 0x2DAC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DAC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAC08u;
        // 0x2dac0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAC08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DAC10u;
}
