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

// Function: sub_003EEC00
// Address: 0x3eec00 - 0x3eecb0
void sub_003EEC00_0x3eec00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EEC00_0x3eec00");
#endif

    switch (ctx->pc) {
        case 0x3eec2cu: goto label_3eec2c;
        case 0x3eec4cu: goto label_3eec4c;
        default: break;
    }

    ctx->pc = 0x3eec00u;

    // 0x3eec00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3eec00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3eec04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3eec04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3eec08: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3eec08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3eec0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3eec0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eec10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3eec10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3eec14: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3eec14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3eec18: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x3eec18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3eec1c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3EEC1Cu;
    {
        const bool branch_taken_0x3eec1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EEC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEC1Cu;
        // 0x3eec20: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eec1c) {
            ctx->pc = 0x3EEC40u;
            goto label_3eec40;
        }
    }
    ctx->pc = 0x3EEC24u;
    // 0x3eec24: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3EEC24u;
    SET_GPR_U32(ctx, 31, 0x3EEC2Cu);
    ctx->pc = 0x3EEC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEC24u;
    // 0x3eec28: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3EEC24u, 0x3EEC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEC2Cu;
label_3eec2c:
    // 0x3eec2c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3eec2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x3eec30: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3eec30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3eec34: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3eec34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x3eec38: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EEC38u;
    {
        const bool branch_taken_0x3eec38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EEC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEC38u;
        // 0x3eec3c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eec38) {
            ctx->pc = 0x3EEC5Cu;
            goto label_3eec5c;
        }
    }
    ctx->pc = 0x3EEC40u;
label_3eec40:
    // 0x3eec40: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x3eec40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3eec44: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3EEC44u;
    SET_GPR_U32(ctx, 31, 0x3EEC4Cu);
    ctx->pc = 0x3EEC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEC44u;
    // 0x3eec48: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3EEC44u, 0x3EEC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEC4Cu;
label_3eec4c:
    // 0x3eec4c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3eec4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3eec50: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3eec50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3eec54: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x3eec54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x3eec58: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3eec58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3eec5c:
    // 0x3eec5c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eec5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3eec60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3eec60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3eec64: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x3eec64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x3eec68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3eec68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3eec6c: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x3eec6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3eec70: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eec70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3eec74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3eec74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3eec78: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3eec78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3eec7c: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x3eec7cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x3eec80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3eec80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3eec84: 0x3e00008  jr          $ra
    ctx->pc = 0x3EEC84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EEC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEC84u;
        // 0x3eec88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EEC84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EEC8Cu;
    // 0x3eec8c: 0x0  nop
    ctx->pc = 0x3eec8cu;
    // NOP
    // 0x3eec90: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3eec90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3eec94: 0x0  nop
    ctx->pc = 0x3eec94u;
    // NOP
    // 0x3eec98: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3eec98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3eec9c: 0x0  nop
    ctx->pc = 0x3eec9cu;
    // NOP
    // 0x3eeca0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3eeca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3eeca4: 0x0  nop
    ctx->pc = 0x3eeca4u;
    // NOP
    // 0x3eeca8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3eeca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3eecac: 0x0  nop
    ctx->pc = 0x3eecacu;
    // NOP
    ctx->pc = 0x3eecb0u;
}
