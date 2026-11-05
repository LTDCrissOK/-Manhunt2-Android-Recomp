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

// Function: sub_003970A0
// Address: 0x3970a0 - 0x397138
void sub_003970A0_0x3970a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003970A0_0x3970a0");
#endif

    switch (ctx->pc) {
        case 0x3970f4u: goto label_3970f4;
        case 0x397108u: goto label_397108;
        case 0x397118u: goto label_397118;
        case 0x397124u: goto label_397124;
        default: break;
    }

    ctx->pc = 0x3970a0u;

    // 0x3970a0: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3970a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3970a4: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3970a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3970a8: 0x8c4791f8  lw          $a3, -0x6E08($v0)
    ctx->pc = 0x3970a8u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x4091F8u));
    // 0x3970ac: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x3970acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x3970b0: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x3970b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x3970b4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3970b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3970b8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x3970b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x3970bc: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x3970bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x3970c0: 0x246351f0  addiu       $v1, $v1, 0x51F0
    ctx->pc = 0x3970c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20976));
    // 0x3970c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3970c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3970c8: 0x24062000  addiu       $a2, $zero, 0x2000
    ctx->pc = 0x3970c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x3970cc: 0x24a56c28  addiu       $a1, $a1, 0x6C28
    ctx->pc = 0x3970ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27688));
    // 0x3970d0: 0x2442aa70  addiu       $v0, $v0, -0x5590
    ctx->pc = 0x3970d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945392));
    // 0x3970d4: 0x2610196c  addiu       $s0, $s0, 0x196C
    ctx->pc = 0x3970d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6508));
    // 0x3970d8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3970d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3970dc: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x3970dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x3970e0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x3970e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x3970e4: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x3970e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x3970e8: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x3970e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x3970ec: 0xc0f25e8  jal         func_3C97A0
    ctx->pc = 0x3970ECu;
    SET_GPR_U32(ctx, 31, 0x3970F4u);
    ctx->pc = 0x3970F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3970ECu;
    // 0x3970f0: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C97A0u, 0x3970ECu, 0x3970F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3970F4u;
label_3970f4:
    // 0x3970f4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3970f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3970f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3970f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3970fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3970fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x397100: 0xc0f2a1e  jal         func_3CA878
    ctx->pc = 0x397100u;
    SET_GPR_U32(ctx, 31, 0x397108u);
    ctx->pc = 0x397104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397100u;
    // 0x397104: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CA878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA878u, 0x397100u, 0x397108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397108u;
label_397108:
    // 0x397108: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x397108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x39710c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x39710cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x397110: 0xc0f260c  jal         func_3C9830
    ctx->pc = 0x397110u;
    SET_GPR_U32(ctx, 31, 0x397118u);
    ctx->pc = 0x397114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397110u;
    // 0x397114: 0x8c4518e8  lw          $a1, 0x18E8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6376)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9830u, 0x397110u, 0x397118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397118u;
label_397118:
    // 0x397118: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x397118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x39711c: 0xc0e5ba2  jal         func_396E88
    ctx->pc = 0x39711Cu;
    SET_GPR_U32(ctx, 31, 0x397124u);
    ctx->pc = 0x396E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396E88u, 0x39711Cu, 0x397124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397124u;
label_397124:
    // 0x397124: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x397124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x397128: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x397128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x39712c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x39712cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x397130: 0x3e00008  jr          $ra
    ctx->pc = 0x397130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397130u;
        // 0x397134: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397138u;
}
