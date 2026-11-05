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

// Function: sub_002DAE18
// Address: 0x2dae18 - 0x2daee0
void sub_002DAE18_0x2dae18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DAE18_0x2dae18");
#endif

    switch (ctx->pc) {
        case 0x2dae78u: goto label_2dae78;
        case 0x2dae88u: goto label_2dae88;
        default: break;
    }

    ctx->pc = 0x2dae18u;

    // 0x2dae18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dae18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dae1c: 0x46006106  mov.s       $f4, $f12
    ctx->pc = 0x2dae1cu;
    ctx->f[4] = FPU_MOV_S(ctx->f[12]);
    // 0x2dae20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dae20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dae24: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2dae24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2dae28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2dae28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dae2c: 0xe60d0420  swc1        $f13, 0x420($s0)
    ctx->pc = 0x2dae2cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1056), bits); }
    // 0x2dae30: 0xc6000438  lwc1        $f0, 0x438($s0)
    ctx->pc = 0x2dae30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dae34: 0xc6020434  lwc1        $f2, 0x434($s0)
    ctx->pc = 0x2dae34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2dae38: 0x460000c0  add.s       $f3, $f0, $f0
    ctx->pc = 0x2dae38u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2dae3c: 0x8e0463c4  lw          $a0, 0x63C4($s0)
    ctx->pc = 0x2dae3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 25540)));
    // 0x2dae40: 0x46021040  add.s       $f1, $f2, $f2
    ctx->pc = 0x2dae40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x2dae44: 0xc60c63cc  lwc1        $f12, 0x63CC($s0)
    ctx->pc = 0x2dae44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 25548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dae48: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x2dae48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2dae4c: 0xe604041c  swc1        $f4, 0x41C($s0)
    ctx->pc = 0x2dae4cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1052), bits); }
    // 0x2dae50: 0x460370c1  sub.s       $f3, $f14, $f3
    ctx->pc = 0x2dae50u;
    ctx->f[3] = FPU_SUB_S(ctx->f[14], ctx->f[3]);
    // 0x2dae54: 0xe60e0424  swc1        $f14, 0x424($s0)
    ctx->pc = 0x2dae54u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1060), bits); }
    // 0x2dae58: 0x46017841  sub.s       $f1, $f15, $f1
    ctx->pc = 0x2dae58u;
    ctx->f[1] = FPU_SUB_S(ctx->f[15], ctx->f[1]);
    // 0x2dae5c: 0xe60f0428  swc1        $f15, 0x428($s0)
    ctx->pc = 0x2dae5cu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1064), bits); }
    // 0x2dae60: 0x46026b40  add.s       $f13, $f13, $f2
    ctx->pc = 0x2dae60u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[2]);
    // 0x2dae64: 0xe600040c  swc1        $f0, 0x40C($s0)
    ctx->pc = 0x2dae64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1036), bits); }
    // 0x2dae68: 0xe6030418  swc1        $f3, 0x418($s0)
    ctx->pc = 0x2dae68u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1048), bits); }
    // 0x2dae6c: 0xe6010414  swc1        $f1, 0x414($s0)
    ctx->pc = 0x2dae6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1044), bits); }
    // 0x2dae70: 0xc0a0c30  jal         func_2830C0
    ctx->pc = 0x2DAE70u;
    SET_GPR_U32(ctx, 31, 0x2DAE78u);
    ctx->pc = 0x2DAE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAE70u;
    // 0x2dae74: 0xe60d0410  swc1        $f13, 0x410($s0) (Delay Slot)
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1040), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2830C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2830C0u, 0x2DAE70u, 0x2DAE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAE78u;
label_2dae78:
    // 0x2dae78: 0xe6006390  swc1        $f0, 0x6390($s0)
    ctx->pc = 0x2dae78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 25488), bits); }
    // 0x2dae7c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2dae7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dae80: 0x26030444  addiu       $v1, $s0, 0x444
    ctx->pc = 0x2dae80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1092));
    // 0x2dae84: 0x0  nop
    ctx->pc = 0x2dae84u;
    // NOP
label_2dae88:
    // 0x2dae88: 0xc600040c  lwc1        $f0, 0x40C($s0)
    ctx->pc = 0x2dae88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dae8c: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x2dae8cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2dae90: 0x0  nop
    ctx->pc = 0x2dae90u;
    // NOP
    // 0x2dae94: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2dae94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2dae98: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2dae98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2dae9c: 0xe460fffc  swc1        $f0, -0x4($v1)
    ctx->pc = 0x2dae9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), bits); }
    // 0x2daea0: 0x2882000a  slti        $v0, $a0, 0xA
    ctx->pc = 0x2daea0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2daea4: 0xc6006390  lwc1        $f0, 0x6390($s0)
    ctx->pc = 0x2daea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 25488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2daea8: 0xc60263f4  lwc1        $f2, 0x63F4($s0)
    ctx->pc = 0x2daea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 25588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2daeac: 0xc6010410  lwc1        $f1, 0x410($s0)
    ctx->pc = 0x2daeacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2daeb0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2daeb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2daeb4: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2daeb4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2daeb8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2daeb8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2daebc: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2daebcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2daec0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2DAEC0u;
    {
        const bool branch_taken_0x2daec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DAEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAEC0u;
        // 0x2daec4: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daec0) {
            ctx->pc = 0x2DAE88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dae88;
        }
    }
    ctx->pc = 0x2DAEC8u;
    // 0x2daec8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2daec8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2daecc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2daeccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2daed0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2daed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2daed4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DAED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DAED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAED4u;
        // 0x2daed8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DAEDCu;
    // 0x2daedc: 0x0  nop
    ctx->pc = 0x2daedcu;
    // NOP
    ctx->pc = 0x2daee0u;
}
