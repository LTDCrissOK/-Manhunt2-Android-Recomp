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

// Function: sub_002545E0
// Address: 0x2545e0 - 0x254668
void sub_002545E0_0x2545e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002545E0_0x2545e0");
#endif

    switch (ctx->pc) {
        case 0x254618u: goto label_254618;
        case 0x254638u: goto label_254638;
        case 0x254640u: goto label_254640;
        default: break;
    }

    ctx->pc = 0x2545e0u;

    // 0x2545e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2545e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2545e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2545e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2545e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2545e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2545ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2545ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2545f0: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2545f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2545f4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2545f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2545f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2545f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2545fc: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x2545fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x254600: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x254600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x254604: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x254604u;
    {
        const bool branch_taken_0x254604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254604u;
        // 0x254608: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x254604) {
            ctx->pc = 0x254648u;
            goto label_254648;
        }
    }
    ctx->pc = 0x25460Cu;
    // 0x25460c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x25460cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x254610: 0xc0944da  jal         func_251368
    ctx->pc = 0x254610u;
    SET_GPR_U32(ctx, 31, 0x254618u);
    ctx->pc = 0x254614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254610u;
    // 0x254614: 0xae021060  sw          $v0, 0x1060($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251368u, 0x254610u, 0x254618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254618u;
label_254618:
    // 0x254618: 0x8e030fe8  lw          $v1, 0xFE8($s0)
    ctx->pc = 0x254618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4072)));
    // 0x25461c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25461cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x254620: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x254620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254624: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x254624u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x254628: 0xac62035c  sw          $v0, 0x35C($v1)
    ctx->pc = 0x254628u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 860), GPR_U32(ctx, 2));
    // 0x25462c: 0x8e040fe4  lw          $a0, 0xFE4($s0)
    ctx->pc = 0x25462cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4068)));
    // 0x254630: 0xc061bb6  jal         func_186ED8
    ctx->pc = 0x254630u;
    SET_GPR_U32(ctx, 31, 0x254638u);
    ctx->pc = 0x254634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254630u;
    // 0x254634: 0x8e051004  lw          $a1, 0x1004($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186ED8u, 0x254630u, 0x254638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254638u;
label_254638:
    // 0x254638: 0xc0944f6  jal         func_2513D8
    ctx->pc = 0x254638u;
    SET_GPR_U32(ctx, 31, 0x254640u);
    ctx->pc = 0x25463Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254638u;
    // 0x25463c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2513D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2513D8u, 0x254638u, 0x254640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254640u;
label_254640:
    // 0x254640: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x254640u;
    {
        const bool branch_taken_0x254640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254640u;
        // 0x254644: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254640) {
            ctx->pc = 0x25464Cu;
            goto label_25464c;
        }
    }
    ctx->pc = 0x254648u;
label_254648:
    // 0x254648: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x254648u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25464c:
    // 0x25464c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25464cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254650: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x254650u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x254654: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x254654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254658: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x254658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25465c: 0x3e00008  jr          $ra
    ctx->pc = 0x25465Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25465Cu;
        // 0x254660: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25465Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254664u;
    // 0x254664: 0x0  nop
    ctx->pc = 0x254664u;
    // NOP
    ctx->pc = 0x254668u;
}
