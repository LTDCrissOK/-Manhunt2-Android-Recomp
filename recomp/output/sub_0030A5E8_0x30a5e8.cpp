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

// Function: sub_0030A5E8
// Address: 0x30a5e8 - 0x30a690
void sub_0030A5E8_0x30a5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030A5E8_0x30a5e8");
#endif

    switch (ctx->pc) {
        case 0x30a634u: goto label_30a634;
        case 0x30a648u: goto label_30a648;
        default: break;
    }

    ctx->pc = 0x30a5e8u;

    // 0x30a5e8: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x30a5e8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x30a5ec: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30a5ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30a5f0: 0x0  nop
    ctx->pc = 0x30a5f0u;
    // NOP
    // 0x30a5f4: 0x0  nop
    ctx->pc = 0x30a5f4u;
    // NOP
    // 0x30a5f8: 0x460d0343  div.s       $f13, $f0, $f13
    ctx->pc = 0x30a5f8u;
    { if (ctx->f[13] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[0], ctx->f[13]); }
    // 0x30a5fc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x30a5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x30a600: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x30a600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x30a604: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30a604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x30a608: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x30a608u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x30a60c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x30a60cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x30a610: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x30a610u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x30a614: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x30a614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x30a618: 0xe48000e0  swc1        $f0, 0xE0($a0)
    ctx->pc = 0x30a618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 224), bits); }
    // 0x30a61c: 0xe48d00e4  swc1        $f13, 0xE4($a0)
    ctx->pc = 0x30a61cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 228), bits); }
    // 0x30a620: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x30a620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x30a624: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x30a624u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x30a628: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x30a628u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x30a62c: 0xc0e3e70  jal         func_38F9C0
    ctx->pc = 0x30A62Cu;
    SET_GPR_U32(ctx, 31, 0x30A634u);
    ctx->pc = 0x30A630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A62Cu;
    // 0x30a630: 0xe7ad0004  swc1        $f13, 0x4($sp) (Delay Slot)
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F9C0u, 0x30A62Cu, 0x30A634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A634u;
label_30a634:
    // 0x30a634: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x30a634u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x30a638: 0xc7ac0004  lwc1        $f12, 0x4($sp)
    ctx->pc = 0x30a638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30a63c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x30a63cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x30a640: 0xc0e3e70  jal         func_38F9C0
    ctx->pc = 0x30A640u;
    SET_GPR_U32(ctx, 31, 0x30A648u);
    ctx->pc = 0x30A644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A640u;
    // 0x30a644: 0xe600bb7c  swc1        $f0, -0x4484($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294949756), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F9C0u, 0x30A640u, 0x30A648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A648u;
label_30a648:
    // 0x30a648: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x30a648u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x30a64c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x30a64cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30a650: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30a650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30a654: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x30a654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30a658: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x30a658u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x30a65c: 0xe620bb80  swc1        $f0, -0x4480($s1)
    ctx->pc = 0x30a65cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294949760), bits); }
    // 0x30a660: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x30a660u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a664: 0x3e00008  jr          $ra
    ctx->pc = 0x30A664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A664u;
        // 0x30a668: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A66Cu;
    // 0x30a66c: 0x0  nop
    ctx->pc = 0x30a66cu;
    // NOP
    // 0x30a670: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x30a670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x30a674: 0x0  nop
    ctx->pc = 0x30a674u;
    // NOP
    // 0x30a678: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x30a678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x30a67c: 0x0  nop
    ctx->pc = 0x30a67cu;
    // NOP
    // 0x30a680: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x30a680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x30a684: 0x0  nop
    ctx->pc = 0x30a684u;
    // NOP
    // 0x30a688: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x30a688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x30a68c: 0x0  nop
    ctx->pc = 0x30a68cu;
    // NOP
    ctx->pc = 0x30a690u;
}
