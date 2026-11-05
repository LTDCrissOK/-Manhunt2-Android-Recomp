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

// Function: sub_00218210
// Address: 0x218210 - 0x218270
void sub_00218210_0x218210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218210_0x218210");
#endif

    switch (ctx->pc) {
        case 0x218230u: goto label_218230;
        case 0x21823cu: goto label_21823c;
        case 0x218248u: goto label_218248;
        default: break;
    }

    ctx->pc = 0x218210u;

    // 0x218210: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x218210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x218214: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x218214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x218218: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x218218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x21821c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21821cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218220: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x218220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218224: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x218224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x218228: 0xc0f77fe  jal         func_3DDFF8
    ctx->pc = 0x218228u;
    SET_GPR_U32(ctx, 31, 0x218230u);
    ctx->pc = 0x21822Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218228u;
    // 0x21822c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DDFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DDFF8u, 0x218228u, 0x218230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218230u;
label_218230:
    // 0x218230: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x218230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x218234: 0xc0f77fe  jal         func_3DDFF8
    ctx->pc = 0x218234u;
    SET_GPR_U32(ctx, 31, 0x21823Cu);
    ctx->pc = 0x218238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218234u;
    // 0x218238: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DDFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DDFF8u, 0x218234u, 0x21823Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21823Cu;
label_21823c:
    // 0x21823c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21823cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218240: 0xc0f77fe  jal         func_3DDFF8
    ctx->pc = 0x218240u;
    SET_GPR_U32(ctx, 31, 0x218248u);
    ctx->pc = 0x218244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218240u;
    // 0x218244: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DDFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DDFF8u, 0x218240u, 0x218248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218248u;
label_218248:
    // 0x218248: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x218248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x21824c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x21824cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218250: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x218250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x218254: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x218254u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218258: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x218258u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21825c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21825cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218260: 0x7e230000  sq          $v1, 0x0($s1)
    ctx->pc = 0x218260u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
    // 0x218264: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x218264u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x218268: 0x3e00008  jr          $ra
    ctx->pc = 0x218268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218268u;
        // 0x21826c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218270u;
}
