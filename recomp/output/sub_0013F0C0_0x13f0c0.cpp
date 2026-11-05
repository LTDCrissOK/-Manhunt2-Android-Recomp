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

// Function: sub_0013F0C0
// Address: 0x13f0c0 - 0x13f120
void sub_0013F0C0_0x13f0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F0C0_0x13f0c0");
#endif

    switch (ctx->pc) {
        case 0x13f0dcu: goto label_13f0dc;
        case 0x13f0e4u: goto label_13f0e4;
        case 0x13f0f8u: goto label_13f0f8;
        case 0x13f108u: goto label_13f108;
        default: break;
    }

    ctx->pc = 0x13f0c0u;

    // 0x13f0c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13f0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13f0c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13f0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13f0c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13f0c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f0cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13f0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13f0d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13f0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13f0d4: 0xc04fcd4  jal         func_13F350
    ctx->pc = 0x13F0D4u;
    SET_GPR_U32(ctx, 31, 0x13F0DCu);
    ctx->pc = 0x13F0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F0D4u;
    // 0x13f0d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F350u, 0x13F0D4u, 0x13F0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F0DCu;
label_13f0dc:
    // 0x13f0dc: 0xc04d7e2  jal         func_135F88
    ctx->pc = 0x13F0DCu;
    SET_GPR_U32(ctx, 31, 0x13F0E4u);
    ctx->pc = 0x13F0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F0DCu;
    // 0x13f0e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F88u, 0x13F0DCu, 0x13F0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F0E4u;
label_13f0e4:
    // 0x13f0e4: 0xae110464  sw          $s1, 0x464($s0)
    ctx->pc = 0x13f0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1124), GPR_U32(ctx, 17));
    // 0x13f0e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13f0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13f0ec: 0xae020460  sw          $v0, 0x460($s0)
    ctx->pc = 0x13f0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1120), GPR_U32(ctx, 2));
    // 0x13f0f0: 0xc04d89a  jal         func_136268
    ctx->pc = 0x13F0F0u;
    SET_GPR_U32(ctx, 31, 0x13F0F8u);
    ctx->pc = 0x13F0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F0F0u;
    // 0x13f0f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136268u, 0x13F0F0u, 0x13F0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F0F8u;
label_13f0f8:
    // 0x13f0f8: 0x3c014150  lui         $at, 0x4150
    ctx->pc = 0x13f0f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16720 << 16));
    // 0x13f0fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x13f0fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13f100: 0xc050146  jal         func_140518
    ctx->pc = 0x13F100u;
    SET_GPR_U32(ctx, 31, 0x13F108u);
    ctx->pc = 0x13F104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F100u;
    // 0x13f104: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140518u, 0x13F100u, 0x13F108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F108u;
label_13f108:
    // 0x13f108: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13f108u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f10c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13f10cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13f110: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13f110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f114: 0x3e00008  jr          $ra
    ctx->pc = 0x13F114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F114u;
        // 0x13f118: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F11Cu;
    // 0x13f11c: 0x0  nop
    ctx->pc = 0x13f11cu;
    // NOP
    ctx->pc = 0x13f120u;
}
