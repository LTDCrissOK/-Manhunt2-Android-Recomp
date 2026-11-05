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

// Function: sub_002097F8
// Address: 0x2097f8 - 0x209878
void sub_002097F8_0x2097f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002097F8_0x2097f8");
#endif

    switch (ctx->pc) {
        case 0x209828u: goto label_209828;
        case 0x209844u: goto label_209844;
        case 0x20984cu: goto label_20984c;
        default: break;
    }

    ctx->pc = 0x2097f8u;

    // 0x2097f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2097f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2097fc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2097fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x209800: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x209800u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x209804: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x209804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x209808: 0x8e029468  lw          $v0, -0x6B98($s0)
    ctx->pc = 0x209808u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F9468u));
    // 0x20980c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20980Cu;
    {
        const bool branch_taken_0x20980c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20980Cu;
        // 0x209810: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20980c) {
            ctx->pc = 0x209830u;
            goto label_209830;
        }
    }
    ctx->pc = 0x209814u;
    // 0x209814: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x209814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209818: 0x3c080048  lui         $t0, 0x48
    ctx->pc = 0x209818u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)72 << 16));
    // 0x20981c: 0x25082b68  addiu       $t0, $t0, 0x2B68
    ctx->pc = 0x20981cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11112));
    // 0x209820: 0xc08254c  jal         func_209530
    ctx->pc = 0x209820u;
    SET_GPR_U32(ctx, 31, 0x209828u);
    ctx->pc = 0x209824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209820u;
    // 0x209824: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209530u, 0x209820u, 0x209828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209828u;
label_209828:
    // 0x209828: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x209828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20982c: 0xae029468  sw          $v0, -0x6B98($s0)
    ctx->pc = 0x20982cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294939752), GPR_U32(ctx, 2));
label_209830:
    // 0x209830: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x209830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x209834: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x209834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209838: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x209838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x20983c: 0xc082700  jal         func_209C00
    ctx->pc = 0x20983Cu;
    SET_GPR_U32(ctx, 31, 0x209844u);
    ctx->pc = 0x209840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20983Cu;
    // 0x209840: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209C00u, 0x20983Cu, 0x209844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209844u;
label_209844:
    // 0x209844: 0xc08266e  jal         func_2099B8
    ctx->pc = 0x209844u;
    SET_GPR_U32(ctx, 31, 0x20984Cu);
    ctx->pc = 0x209848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209844u;
    // 0x209848: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099B8u, 0x209844u, 0x20984Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20984Cu;
label_20984c:
    // 0x20984c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x20984cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x209850: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x209850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209854: 0x8c432b6c  lw          $v1, 0x2B6C($v0)
    ctx->pc = 0x209854u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x482B6Cu));
    // 0x209858: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x209858u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20985c: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20985Cu;
    {
        const bool branch_taken_0x20985c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x209860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20985Cu;
        // 0x209860: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20985c) {
            ctx->pc = 0x20986Cu;
            goto label_20986c;
        }
    }
    ctx->pc = 0x209864u;
    // 0x209864: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x209864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x209868: 0xa04393d8  sb          $v1, -0x6C28($v0)
    ctx->pc = 0x209868u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3F93D8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F93D8u, _value); } while (0);
label_20986c:
    // 0x20986c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x20986cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x209870: 0x3e00008  jr          $ra
    ctx->pc = 0x209870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209870u;
        // 0x209874: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209878u;
}
