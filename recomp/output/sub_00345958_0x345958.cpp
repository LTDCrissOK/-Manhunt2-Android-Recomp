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

// Function: sub_00345958
// Address: 0x345958 - 0x3459e0
void sub_00345958_0x345958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345958_0x345958");
#endif

    switch (ctx->pc) {
        case 0x345974u: goto label_345974;
        default: break;
    }

    ctx->pc = 0x345958u;

    // 0x345958: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x345958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34595c: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x34595cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x345960: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x345960u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x345964: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x345964u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x345968: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x345968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34596c: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x34596Cu;
    SET_GPR_U32(ctx, 31, 0x345974u);
    ctx->pc = 0x345970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34596Cu;
    // 0x345970: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x34596Cu, 0x345974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345974u;
label_345974:
    // 0x345974: 0x304303ff  andi        $v1, $v0, 0x3FF
    ctx->pc = 0x345974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x345978: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x345978u;
    {
        const bool branch_taken_0x345978 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x34597Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345978u;
        // 0x34597c: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x345978) {
            ctx->pc = 0x345994u;
            goto label_345994;
        }
    }
    ctx->pc = 0x345980u;
    // 0x345980: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x345980u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x345984: 0x0  nop
    ctx->pc = 0x345984u;
    // NOP
    // 0x345988: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x345988u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x34598c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34598Cu;
    {
        const bool branch_taken_0x34598c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34598c) {
            ctx->pc = 0x3459ACu;
            goto label_3459ac;
        }
    }
    ctx->pc = 0x345994u;
label_345994:
    // 0x345994: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x345994u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x345998: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x345998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34599c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x34599cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3459a0: 0x0  nop
    ctx->pc = 0x3459a0u;
    // NOP
    // 0x3459a4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3459a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3459a8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3459a8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3459ac:
    // 0x3459ac: 0x3c013a80  lui         $at, 0x3A80
    ctx->pc = 0x3459acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14976 << 16));
    // 0x3459b0: 0x34212008  ori         $at, $at, 0x2008
    ctx->pc = 0x3459b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8200);
    // 0x3459b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3459b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3459b8: 0x4614a801  sub.s       $f0, $f21, $f20
    ctx->pc = 0x3459b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    // 0x3459bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3459bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3459c0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3459c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3459c4: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x3459c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3459c8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3459c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3459cc: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x3459ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x3459d0: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x3459d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3459d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3459D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3459D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3459D4u;
        // 0x3459d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3459D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3459DCu;
    // 0x3459dc: 0x0  nop
    ctx->pc = 0x3459dcu;
    // NOP
    ctx->pc = 0x3459e0u;
}
