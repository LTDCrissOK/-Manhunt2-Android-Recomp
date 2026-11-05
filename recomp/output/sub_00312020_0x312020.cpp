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

// Function: sub_00312020
// Address: 0x312020 - 0x3120a0
void sub_00312020_0x312020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312020_0x312020");
#endif

    switch (ctx->pc) {
        case 0x312044u: goto label_312044;
        case 0x312050u: goto label_312050;
        case 0x312070u: goto label_312070;
        case 0x312078u: goto label_312078;
        case 0x312080u: goto label_312080;
        default: break;
    }

    ctx->pc = 0x312020u;

    // 0x312020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x312020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x312024: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x312024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x312028: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x312028u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31202c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31202cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x312030: 0x26110040  addiu       $s1, $s0, 0x40
    ctx->pc = 0x312030u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x312034: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x312034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x312038: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x312038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x31203c: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x31203Cu;
    SET_GPR_U32(ctx, 31, 0x312044u);
    ctx->pc = 0x312040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31203Cu;
    // 0x312040: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x31203Cu, 0x312044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312044u;
label_312044:
    // 0x312044: 0x26120080  addiu       $s2, $s0, 0x80
    ctx->pc = 0x312044u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x312048: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x312048u;
    SET_GPR_U32(ctx, 31, 0x312050u);
    ctx->pc = 0x31204Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312048u;
    // 0x31204c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x312048u, 0x312050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312050u;
label_312050:
    // 0x312050: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x312050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x312054: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x312054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312058: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x312058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x31205c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x31205cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x312060: 0xae10000c  sw          $s0, 0xC($s0)
    ctx->pc = 0x312060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 16));
    // 0x312064: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x312064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x312068: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x312068u;
    SET_GPR_U32(ctx, 31, 0x312070u);
    ctx->pc = 0x31206Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312068u;
    // 0x31206c: 0xa2000018  sb          $zero, 0x18($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x312068u, 0x312070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312070u;
label_312070:
    // 0x312070: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x312070u;
    SET_GPR_U32(ctx, 31, 0x312078u);
    ctx->pc = 0x312074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312070u;
    // 0x312074: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x312070u, 0x312078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312078u;
label_312078:
    // 0x312078: 0xc0c48da  jal         func_312368
    ctx->pc = 0x312078u;
    SET_GPR_U32(ctx, 31, 0x312080u);
    ctx->pc = 0x31207Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312078u;
    // 0x31207c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x312078u, 0x312080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312080u;
label_312080:
    // 0x312080: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x312080u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312084: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x312084u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x312088: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x312088u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31208c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x31208cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x312090: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x312090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x312094: 0x3e00008  jr          $ra
    ctx->pc = 0x312094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312094u;
        // 0x312098: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31209Cu;
    // 0x31209c: 0x0  nop
    ctx->pc = 0x31209cu;
    // NOP
    ctx->pc = 0x3120a0u;
}
