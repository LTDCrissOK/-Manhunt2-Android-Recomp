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

// Function: sub_002CC0A8
// Address: 0x2cc0a8 - 0x2cc148
void sub_002CC0A8_0x2cc0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC0A8_0x2cc0a8");
#endif

    switch (ctx->pc) {
        case 0x2cc0e0u: goto label_2cc0e0;
        case 0x2cc114u: goto label_2cc114;
        default: break;
    }

    ctx->pc = 0x2cc0a8u;

    // 0x2cc0a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cc0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cc0ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cc0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cc0b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2cc0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2cc0b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cc0b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc0b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2cc0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2cc0bc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2cc0bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc0c0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2cc0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2cc0c4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2cc0c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc0c8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2cc0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2cc0cc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2cc0ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc0d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cc0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cc0d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2cc0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2cc0d8: 0xc0b2ffe  jal         func_2CBFF8
    ctx->pc = 0x2CC0D8u;
    SET_GPR_U32(ctx, 31, 0x2CC0E0u);
    ctx->pc = 0x2CC0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC0D8u;
    // 0x2cc0dc: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBFF8u, 0x2CC0D8u, 0x2CC0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC0E0u;
label_2cc0e0:
    // 0x2cc0e0: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x2cc0e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x2cc0e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2cc0e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc0e8: 0x2610a608  addiu       $s0, $s0, -0x59F8
    ctx->pc = 0x2cc0e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944264));
    // 0x2cc0ec: 0x12303c  dsll32      $a2, $s2, 0
    ctx->pc = 0x2cc0ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) << (32 + 0));
    // 0x2cc0f0: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x2cc0f0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x2cc0f4: 0x13383c  dsll32      $a3, $s3, 0
    ctx->pc = 0x2cc0f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) << (32 + 0));
    // 0x2cc0f8: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2cc0f8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x2cc0fc: 0x14403c  dsll32      $t0, $s4, 0
    ctx->pc = 0x2cc0fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 20) << (32 + 0));
    // 0x2cc100: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x2cc100u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x2cc104: 0x15483c  dsll32      $t1, $s5, 0
    ctx->pc = 0x2cc104u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 21) << (32 + 0));
    // 0x2cc108: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x2cc108u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x2cc10c: 0xc0e3cce  jal         func_38F338
    ctx->pc = 0x2CC10Cu;
    SET_GPR_U32(ctx, 31, 0x2CC114u);
    ctx->pc = 0x2CC110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC10Cu;
    // 0x2cc110: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F338u, 0x2CC10Cu, 0x2CC114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC114u;
label_2cc114:
    // 0x2cc114: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2cc114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2cc118: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2cc118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2cc11c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cc11cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc120: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cc120u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cc124: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cc124u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc128: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2cc128u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cc12c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2cc12cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cc130: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2cc130u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2cc134: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2cc134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cc138: 0xac43a61c  sw          $v1, -0x59E4($v0)
    ctx->pc = 0x2cc138u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x57A61Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57A61Cu, _value); } while (0);
    // 0x2cc13c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC13Cu;
        // 0x2cc140: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC13Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC144u;
    // 0x2cc144: 0x0  nop
    ctx->pc = 0x2cc144u;
    // NOP
    ctx->pc = 0x2cc148u;
}
