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

// Function: sub_0015CF70
// Address: 0x15cf70 - 0x15cfc0
void sub_0015CF70_0x15cf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015CF70_0x15cf70");
#endif

    switch (ctx->pc) {
        case 0x15cf90u: goto label_15cf90;
        default: break;
    }

    ctx->pc = 0x15cf70u;

    // 0x15cf70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15cf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15cf74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15cf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15cf78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x15cf78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15cf7c: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x15cf7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15cf80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15cf80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cf84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15cf84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15cf88: 0xc0573a2  jal         func_15CE88
    ctx->pc = 0x15CF88u;
    SET_GPR_U32(ctx, 31, 0x15CF90u);
    ctx->pc = 0x15CF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CF88u;
    // 0x15cf8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15CE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CE88u, 0x15CF88u, 0x15CF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CF90u;
label_15cf90:
    // 0x15cf90: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x15cf90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x15cf94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15cf94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15cf98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15cf98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15cf9c: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x15cf9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15cfa0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15cfa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15cfa4: 0x718021  addu        $s0, $v1, $s1
    ctx->pc = 0x15cfa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x15cfa8: 0xe6000380  swc1        $f0, 0x380($s0)
    ctx->pc = 0x15cfa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 896), bits); }
    // 0x15cfac: 0xae000360  sw          $zero, 0x360($s0)
    ctx->pc = 0x15cfacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 0));
    // 0x15cfb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15cfb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15cfb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x15cfb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15cfb8: 0x3e00008  jr          $ra
    ctx->pc = 0x15CFB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CFB8u;
        // 0x15cfbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CFB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15CFC0u;
}
