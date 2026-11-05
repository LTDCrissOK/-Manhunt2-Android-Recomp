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

// Function: sub_00241E18
// Address: 0x241e18 - 0x2420e8
void sub_00241E18_0x241e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241E18_0x241e18");
#endif

    switch (ctx->pc) {
        case 0x241e18u: goto label_241e18;
        case 0x241e1cu: goto label_241e1c;
        case 0x241e20u: goto label_241e20;
        case 0x241e24u: goto label_241e24;
        case 0x241e28u: goto label_241e28;
        case 0x241e2cu: goto label_241e2c;
        case 0x241e30u: goto label_241e30;
        case 0x241e34u: goto label_241e34;
        case 0x241e38u: goto label_241e38;
        case 0x241e3cu: goto label_241e3c;
        case 0x241e40u: goto label_241e40;
        case 0x241e44u: goto label_241e44;
        case 0x241e48u: goto label_241e48;
        case 0x241e4cu: goto label_241e4c;
        case 0x241e50u: goto label_241e50;
        case 0x241e54u: goto label_241e54;
        case 0x241e58u: goto label_241e58;
        case 0x241e5cu: goto label_241e5c;
        case 0x241e60u: goto label_241e60;
        case 0x241e64u: goto label_241e64;
        case 0x241e68u: goto label_241e68;
        case 0x241e6cu: goto label_241e6c;
        case 0x241e70u: goto label_241e70;
        case 0x241e74u: goto label_241e74;
        case 0x241e78u: goto label_241e78;
        case 0x241e7cu: goto label_241e7c;
        case 0x241e80u: goto label_241e80;
        case 0x241e84u: goto label_241e84;
        case 0x241e88u: goto label_241e88;
        case 0x241e8cu: goto label_241e8c;
        case 0x241e90u: goto label_241e90;
        case 0x241e94u: goto label_241e94;
        case 0x241e98u: goto label_241e98;
        case 0x241e9cu: goto label_241e9c;
        case 0x241ea0u: goto label_241ea0;
        case 0x241ea4u: goto label_241ea4;
        case 0x241ea8u: goto label_241ea8;
        case 0x241eacu: goto label_241eac;
        case 0x241eb0u: goto label_241eb0;
        case 0x241eb4u: goto label_241eb4;
        case 0x241eb8u: goto label_241eb8;
        case 0x241ebcu: goto label_241ebc;
        case 0x241ec0u: goto label_241ec0;
        case 0x241ec4u: goto label_241ec4;
        case 0x241ec8u: goto label_241ec8;
        case 0x241eccu: goto label_241ecc;
        case 0x241ed0u: goto label_241ed0;
        case 0x241ed4u: goto label_241ed4;
        case 0x241ed8u: goto label_241ed8;
        case 0x241edcu: goto label_241edc;
        case 0x241ee0u: goto label_241ee0;
        case 0x241ee4u: goto label_241ee4;
        case 0x241ee8u: goto label_241ee8;
        case 0x241eecu: goto label_241eec;
        case 0x241ef0u: goto label_241ef0;
        case 0x241ef4u: goto label_241ef4;
        case 0x241ef8u: goto label_241ef8;
        case 0x241efcu: goto label_241efc;
        case 0x241f00u: goto label_241f00;
        case 0x241f04u: goto label_241f04;
        case 0x241f08u: goto label_241f08;
        case 0x241f0cu: goto label_241f0c;
        case 0x241f10u: goto label_241f10;
        case 0x241f14u: goto label_241f14;
        case 0x241f18u: goto label_241f18;
        case 0x241f1cu: goto label_241f1c;
        case 0x241f20u: goto label_241f20;
        case 0x241f24u: goto label_241f24;
        case 0x241f28u: goto label_241f28;
        case 0x241f2cu: goto label_241f2c;
        case 0x241f30u: goto label_241f30;
        case 0x241f34u: goto label_241f34;
        case 0x241f38u: goto label_241f38;
        case 0x241f3cu: goto label_241f3c;
        case 0x241f40u: goto label_241f40;
        case 0x241f44u: goto label_241f44;
        case 0x241f48u: goto label_241f48;
        case 0x241f4cu: goto label_241f4c;
        case 0x241f50u: goto label_241f50;
        case 0x241f54u: goto label_241f54;
        case 0x241f58u: goto label_241f58;
        case 0x241f5cu: goto label_241f5c;
        case 0x241f60u: goto label_241f60;
        case 0x241f64u: goto label_241f64;
        case 0x241f68u: goto label_241f68;
        case 0x241f6cu: goto label_241f6c;
        case 0x241f70u: goto label_241f70;
        case 0x241f74u: goto label_241f74;
        case 0x241f78u: goto label_241f78;
        case 0x241f7cu: goto label_241f7c;
        case 0x241f80u: goto label_241f80;
        case 0x241f84u: goto label_241f84;
        case 0x241f88u: goto label_241f88;
        case 0x241f8cu: goto label_241f8c;
        case 0x241f90u: goto label_241f90;
        case 0x241f94u: goto label_241f94;
        case 0x241f98u: goto label_241f98;
        case 0x241f9cu: goto label_241f9c;
        case 0x241fa0u: goto label_241fa0;
        case 0x241fa4u: goto label_241fa4;
        case 0x241fa8u: goto label_241fa8;
        case 0x241facu: goto label_241fac;
        case 0x241fb0u: goto label_241fb0;
        case 0x241fb4u: goto label_241fb4;
        case 0x241fb8u: goto label_241fb8;
        case 0x241fbcu: goto label_241fbc;
        case 0x241fc0u: goto label_241fc0;
        case 0x241fc4u: goto label_241fc4;
        case 0x241fc8u: goto label_241fc8;
        case 0x241fccu: goto label_241fcc;
        case 0x241fd0u: goto label_241fd0;
        case 0x241fd4u: goto label_241fd4;
        case 0x241fd8u: goto label_241fd8;
        case 0x241fdcu: goto label_241fdc;
        case 0x241fe0u: goto label_241fe0;
        case 0x241fe4u: goto label_241fe4;
        case 0x241fe8u: goto label_241fe8;
        case 0x241fecu: goto label_241fec;
        case 0x241ff0u: goto label_241ff0;
        case 0x241ff4u: goto label_241ff4;
        case 0x241ff8u: goto label_241ff8;
        case 0x241ffcu: goto label_241ffc;
        case 0x242000u: goto label_242000;
        case 0x242004u: goto label_242004;
        case 0x242008u: goto label_242008;
        case 0x24200cu: goto label_24200c;
        case 0x242010u: goto label_242010;
        case 0x242014u: goto label_242014;
        case 0x242018u: goto label_242018;
        case 0x24201cu: goto label_24201c;
        case 0x242020u: goto label_242020;
        case 0x242024u: goto label_242024;
        case 0x242028u: goto label_242028;
        case 0x24202cu: goto label_24202c;
        case 0x242030u: goto label_242030;
        case 0x242034u: goto label_242034;
        case 0x242038u: goto label_242038;
        case 0x24203cu: goto label_24203c;
        case 0x242040u: goto label_242040;
        case 0x242044u: goto label_242044;
        case 0x242048u: goto label_242048;
        case 0x24204cu: goto label_24204c;
        case 0x242050u: goto label_242050;
        case 0x242054u: goto label_242054;
        case 0x242058u: goto label_242058;
        case 0x24205cu: goto label_24205c;
        case 0x242060u: goto label_242060;
        case 0x242064u: goto label_242064;
        case 0x242068u: goto label_242068;
        case 0x24206cu: goto label_24206c;
        case 0x242070u: goto label_242070;
        case 0x242074u: goto label_242074;
        case 0x242078u: goto label_242078;
        case 0x24207cu: goto label_24207c;
        case 0x242080u: goto label_242080;
        case 0x242084u: goto label_242084;
        case 0x242088u: goto label_242088;
        case 0x24208cu: goto label_24208c;
        case 0x242090u: goto label_242090;
        case 0x242094u: goto label_242094;
        case 0x242098u: goto label_242098;
        case 0x24209cu: goto label_24209c;
        case 0x2420a0u: goto label_2420a0;
        case 0x2420a4u: goto label_2420a4;
        case 0x2420a8u: goto label_2420a8;
        case 0x2420acu: goto label_2420ac;
        case 0x2420b0u: goto label_2420b0;
        case 0x2420b4u: goto label_2420b4;
        case 0x2420b8u: goto label_2420b8;
        case 0x2420bcu: goto label_2420bc;
        case 0x2420c0u: goto label_2420c0;
        case 0x2420c4u: goto label_2420c4;
        case 0x2420c8u: goto label_2420c8;
        case 0x2420ccu: goto label_2420cc;
        case 0x2420d0u: goto label_2420d0;
        case 0x2420d4u: goto label_2420d4;
        case 0x2420d8u: goto label_2420d8;
        case 0x2420dcu: goto label_2420dc;
        case 0x2420e0u: goto label_2420e0;
        case 0x2420e4u: goto label_2420e4;
        default: break;
    }

    ctx->pc = 0x241e18u;

label_241e18:
    // 0x241e18: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x241e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_241e1c:
    // 0x241e1c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x241e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_241e20:
    // 0x241e20: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x241e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_241e24:
    // 0x241e24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x241e24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_241e28:
    // 0x241e28: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x241e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_241e2c:
    // 0x241e2c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x241e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_241e30:
    // 0x241e30: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x241e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_241e34:
    // 0x241e34: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x241e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_241e38:
    // 0x241e38: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x241e38u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_241e3c:
    // 0x241e3c: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x241e3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_241e40:
    // 0x241e40: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x241e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_241e44:
    // 0x241e44: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x241e44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_241e48:
    // 0x241e48: 0x8e23010c  lw          $v1, 0x10C($s1)
    ctx->pc = 0x241e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_241e4c:
    // 0x241e4c: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x241e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
label_241e50:
    // 0x241e50: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x241e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_241e54:
    // 0x241e54: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x241e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_241e58:
    // 0x241e58: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_241e5c:
    if (ctx->pc == 0x241E5Cu) {
        ctx->pc = 0x241E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241E58u;
        // 0x241e5c: 0xc621037c  lwc1        $f1, 0x37C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x241E60u;
        goto label_241e60;
    }
    ctx->pc = 0x241E58u;
    {
        const bool branch_taken_0x241e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241e58) {
            ctx->pc = 0x241E5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241E58u;
            // 0x241e5c: 0xc621037c  lwc1        $f1, 0x37C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x241E6Cu;
            goto label_241e6c;
        }
    }
    ctx->pc = 0x241E60u;
label_241e60:
    // 0x241e60: 0xc0bbe06  jal         func_2EF818
label_241e64:
    if (ctx->pc == 0x241E64u) {
        ctx->pc = 0x241E68u;
        goto label_241e68;
    }
    ctx->pc = 0x241E60u;
    SET_GPR_U32(ctx, 31, 0x241E68u);
    ctx->pc = 0x2EF818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF818u, 0x241E60u, 0x241E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241E68u;
label_241e68:
    // 0x241e68: 0xc621037c  lwc1        $f1, 0x37C($s1)
    ctx->pc = 0x241e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_241e6c:
    // 0x241e6c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x241e6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_241e70:
    // 0x241e70: 0x0  nop
    ctx->pc = 0x241e70u;
    // NOP
label_241e74:
    // 0x241e74: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x241e74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_241e78:
    // 0x241e78: 0x0  nop
    ctx->pc = 0x241e78u;
    // NOP
label_241e7c:
    // 0x241e7c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_241e80:
    if (ctx->pc == 0x241E80u) {
        ctx->pc = 0x241E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241E7Cu;
        // 0x241e80: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241E84u;
        goto label_241e84;
    }
    ctx->pc = 0x241E7Cu;
    {
        const bool branch_taken_0x241e7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x241E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241E7Cu;
        // 0x241e80: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241e7c) {
            ctx->pc = 0x241E90u;
            goto label_241e90;
        }
    }
    ctx->pc = 0x241E84u;
label_241e84:
    // 0x241e84: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x241e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_241e88:
    // 0x241e88: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x241e88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_241e8c:
    // 0x241e8c: 0xe620037c  swc1        $f0, 0x37C($s1)
    ctx->pc = 0x241e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 892), bits); }
label_241e90:
    // 0x241e90: 0xc620037c  lwc1        $f0, 0x37C($s1)
    ctx->pc = 0x241e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_241e94:
    // 0x241e94: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x241e94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_241e98:
    // 0x241e98: 0x0  nop
    ctx->pc = 0x241e98u;
    // NOP
label_241e9c:
    // 0x241e9c: 0x45020077  bc1fl       . + 4 + (0x77 << 2)
label_241ea0:
    if (ctx->pc == 0x241EA0u) {
        ctx->pc = 0x241EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241E9Cu;
        // 0x241ea0: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241EA4u;
        goto label_241ea4;
    }
    ctx->pc = 0x241E9Cu;
    {
        const bool branch_taken_0x241e9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x241e9c) {
            ctx->pc = 0x241EA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241E9Cu;
            // 0x241ea0: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24207Cu;
            goto label_24207c;
        }
    }
    ctx->pc = 0x241EA4u;
label_241ea4:
    // 0x241ea4: 0xc62000d0  lwc1        $f0, 0xD0($s1)
    ctx->pc = 0x241ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_241ea8:
    // 0x241ea8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x241ea8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_241eac:
    // 0x241eac: 0x0  nop
    ctx->pc = 0x241eacu;
    // NOP
label_241eb0:
    // 0x241eb0: 0x45020072  bc1fl       . + 4 + (0x72 << 2)
label_241eb4:
    if (ctx->pc == 0x241EB4u) {
        ctx->pc = 0x241EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241EB0u;
        // 0x241eb4: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241EB8u;
        goto label_241eb8;
    }
    ctx->pc = 0x241EB0u;
    {
        const bool branch_taken_0x241eb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x241eb0) {
            ctx->pc = 0x241EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241EB0u;
            // 0x241eb4: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24207Cu;
            goto label_24207c;
        }
    }
    ctx->pc = 0x241EB8u;
label_241eb8:
    // 0x241eb8: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x241eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_241ebc:
    // 0x241ebc: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x241ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_241ec0:
    // 0x241ec0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_241ec4:
    if (ctx->pc == 0x241EC4u) {
        ctx->pc = 0x241EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241EC0u;
        // 0x241ec4: 0xe622037c  swc1        $f2, 0x37C($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 892), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x241EC8u;
        goto label_241ec8;
    }
    ctx->pc = 0x241EC0u;
    {
        const bool branch_taken_0x241ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241EC0u;
        // 0x241ec4: 0xe622037c  swc1        $f2, 0x37C($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 892), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x241ec0) {
            ctx->pc = 0x241ED0u;
            goto label_241ed0;
        }
    }
    ctx->pc = 0x241EC8u;
label_241ec8:
    // 0x241ec8: 0xc0bbe0a  jal         func_2EF828
label_241ecc:
    if (ctx->pc == 0x241ECCu) {
        ctx->pc = 0x241ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241EC8u;
        // 0x241ecc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241ED0u;
        goto label_241ed0;
    }
    ctx->pc = 0x241EC8u;
    SET_GPR_U32(ctx, 31, 0x241ED0u);
    ctx->pc = 0x241ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241EC8u;
    // 0x241ecc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF828u, 0x241EC8u, 0x241ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241ED0u;
label_241ed0:
    // 0x241ed0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x241ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_241ed4:
    // 0x241ed4: 0xc076e46  jal         func_1DB918
label_241ed8:
    if (ctx->pc == 0x241ED8u) {
        ctx->pc = 0x241ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241ED4u;
        // 0x241ed8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241EDCu;
        goto label_241edc;
    }
    ctx->pc = 0x241ED4u;
    SET_GPR_U32(ctx, 31, 0x241EDCu);
    ctx->pc = 0x241ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241ED4u;
    // 0x241ed8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x241ED4u, 0x241EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241EDCu;
label_241edc:
    // 0x241edc: 0xc079686  jal         func_1E5A18
label_241ee0:
    if (ctx->pc == 0x241EE0u) {
        ctx->pc = 0x241EE4u;
        goto label_241ee4;
    }
    ctx->pc = 0x241EDCu;
    SET_GPR_U32(ctx, 31, 0x241EE4u);
    ctx->pc = 0x1E5A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5A18u, 0x241EDCu, 0x241EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241EE4u;
label_241ee4:
    // 0x241ee4: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x241ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_241ee8:
    // 0x241ee8: 0x24057000  addiu       $a1, $zero, 0x7000
    ctx->pc = 0x241ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
label_241eec:
    // 0x241eec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x241eecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241ef0:
    // 0x241ef0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x241ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241ef4:
    // 0x241ef4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x241ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_241ef8:
    // 0x241ef8: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x241ef8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_241efc:
    // 0x241efc: 0xc079906  jal         func_1E6418
label_241f00:
    if (ctx->pc == 0x241F00u) {
        ctx->pc = 0x241F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241EFCu;
        // 0x241f00: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241F04u;
        goto label_241f04;
    }
    ctx->pc = 0x241EFCu;
    SET_GPR_U32(ctx, 31, 0x241F04u);
    ctx->pc = 0x241F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241EFCu;
    // 0x241f00: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6418u, 0x241EFCu, 0x241F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241F04u;
label_241f04:
    // 0x241f04: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_241f08:
    if (ctx->pc == 0x241F08u) {
        ctx->pc = 0x241F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241F04u;
        // 0x241f08: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241F0Cu;
        goto label_241f0c;
    }
    ctx->pc = 0x241F04u;
    {
        const bool branch_taken_0x241f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241F04u;
        // 0x241f08: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241f04) {
            ctx->pc = 0x241FD8u;
            goto label_241fd8;
        }
    }
    ctx->pc = 0x241F0Cu;
label_241f0c:
    // 0x241f0c: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x241f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
label_241f10:
    // 0x241f10: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x241f10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_241f14:
    // 0x241f14: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x241f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
label_241f18:
    // 0x241f18: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x241f18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_241f1c:
    // 0x241f1c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x241f1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_241f20:
    // 0x241f20: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x241f20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241f24:
    // 0x241f24: 0x1000001e  b           . + 4 + (0x1E << 2)
label_241f28:
    if (ctx->pc == 0x241F28u) {
        ctx->pc = 0x241F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241F24u;
        // 0x241f28: 0x3c140040  lui         $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241F2Cu;
        goto label_241f2c;
    }
    ctx->pc = 0x241F24u;
    {
        const bool branch_taken_0x241f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241F24u;
        // 0x241f28: 0x3c140040  lui         $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241f24) {
            ctx->pc = 0x241FA0u;
            goto label_241fa0;
        }
    }
    ctx->pc = 0x241F2Cu;
label_241f2c:
    // 0x241f2c: 0x0  nop
    ctx->pc = 0x241f2cu;
    // NOP
label_241f30:
    // 0x241f30: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x241f30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_241f34:
    // 0x241f34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x241f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_241f38:
    // 0x241f38: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x241f38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_241f3c:
    // 0x241f3c: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x241f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_241f40:
    // 0x241f40: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x241f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
label_241f44:
    // 0x241f44: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x241f44u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_241f48:
    // 0x241f48: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_241f4c:
    if (ctx->pc == 0x241F4Cu) {
        ctx->pc = 0x241F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241F48u;
        // 0x241f4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241F50u;
        goto label_241f50;
    }
    ctx->pc = 0x241F48u;
    {
        const bool branch_taken_0x241f48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x241F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241F48u;
        // 0x241f4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241f48) {
            ctx->pc = 0x241F54u;
            goto label_241f54;
        }
    }
    ctx->pc = 0x241F50u;
label_241f50:
    // 0x241f50: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x241f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_241f54:
    // 0x241f54: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x241f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
label_241f58:
    // 0x241f58: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x241f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_241f5c:
    // 0x241f5c: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x241f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_241f60:
    // 0x241f60: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_241f64:
    if (ctx->pc == 0x241F64u) {
        ctx->pc = 0x241F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241F60u;
        // 0x241f64: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241F68u;
        goto label_241f68;
    }
    ctx->pc = 0x241F60u;
    {
        const bool branch_taken_0x241f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241F60u;
        // 0x241f64: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241f60) {
            ctx->pc = 0x241FB4u;
            goto label_241fb4;
        }
    }
    ctx->pc = 0x241F68u;
label_241f68:
    // 0x241f68: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_241f6c:
    if (ctx->pc == 0x241F6Cu) {
        ctx->pc = 0x241F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241F68u;
        // 0x241f6c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241F70u;
        goto label_241f70;
    }
    ctx->pc = 0x241F68u;
    {
        const bool branch_taken_0x241f68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x241F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241F68u;
        // 0x241f6c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241f68) {
            ctx->pc = 0x241F74u;
            goto label_241f74;
        }
    }
    ctx->pc = 0x241F70u;
label_241f70:
    // 0x241f70: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x241f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_241f74:
    // 0x241f74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x241f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_241f78:
    // 0x241f78: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x241f78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_241f7c:
    // 0x241f7c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x241f7cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_241f80:
    // 0x241f80: 0xc08fd5a  jal         func_23F568
label_241f84:
    if (ctx->pc == 0x241F84u) {
        ctx->pc = 0x241F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241F80u;
        // 0x241f84: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241F88u;
        goto label_241f88;
    }
    ctx->pc = 0x241F80u;
    SET_GPR_U32(ctx, 31, 0x241F88u);
    ctx->pc = 0x241F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241F80u;
    // 0x241f84: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F568u, 0x241F80u, 0x241F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241F88u;
label_241f88:
    // 0x241f88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x241f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_241f8c:
    // 0x241f8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x241f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_241f90:
    // 0x241f90: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x241f90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_241f94:
    // 0x241f94: 0xc08fd5a  jal         func_23F568
label_241f98:
    if (ctx->pc == 0x241F98u) {
        ctx->pc = 0x241F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241F94u;
        // 0x241f98: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x241F9Cu;
        goto label_241f9c;
    }
    ctx->pc = 0x241F94u;
    SET_GPR_U32(ctx, 31, 0x241F9Cu);
    ctx->pc = 0x241F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241F94u;
    // 0x241f98: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F568u, 0x241F94u, 0x241F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241F9Cu;
label_241f9c:
    // 0x241f9c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x241f9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_241fa0:
    // 0x241fa0: 0xc0796ac  jal         func_1E5AB0
label_241fa4:
    if (ctx->pc == 0x241FA4u) {
        ctx->pc = 0x241FA8u;
        goto label_241fa8;
    }
    ctx->pc = 0x241FA0u;
    SET_GPR_U32(ctx, 31, 0x241FA8u);
    ctx->pc = 0x1E5AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5AB0u, 0x241FA0u, 0x241FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241FA8u;
label_241fa8:
    // 0x241fa8: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x241fa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_241fac:
    // 0x241fac: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_241fb0:
    if (ctx->pc == 0x241FB0u) {
        ctx->pc = 0x241FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241FACu;
        // 0x241fb0: 0x8e8291dc  lw          $v0, -0x6E24($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294939100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241FB4u;
        goto label_241fb4;
    }
    ctx->pc = 0x241FACu;
    {
        const bool branch_taken_0x241fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241FACu;
        // 0x241fb0: 0x8e8291dc  lw          $v0, -0x6E24($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294939100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241fac) {
            ctx->pc = 0x241F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241f30;
        }
    }
    ctx->pc = 0x241FB4u;
label_241fb4:
    // 0x241fb4: 0x52600009  beql        $s3, $zero, . + 4 + (0x9 << 2)
label_241fb8:
    if (ctx->pc == 0x241FB8u) {
        ctx->pc = 0x241FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241FB4u;
        // 0x241fb8: 0x8e24010c  lw          $a0, 0x10C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241FBCu;
        goto label_241fbc;
    }
    ctx->pc = 0x241FB4u;
    {
        const bool branch_taken_0x241fb4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x241fb4) {
            ctx->pc = 0x241FB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241FB4u;
            // 0x241fb8: 0x8e24010c  lw          $a0, 0x10C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241FDCu;
            goto label_241fdc;
        }
    }
    ctx->pc = 0x241FBCu;
label_241fbc:
    // 0x241fbc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x241fbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_241fc0:
    // 0x241fc0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x241fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_241fc4:
    // 0x241fc4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x241fc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_241fc8:
    // 0x241fc8: 0xc0b12b0  jal         func_2C4AC0
label_241fcc:
    if (ctx->pc == 0x241FCCu) {
        ctx->pc = 0x241FD0u;
        goto label_241fd0;
    }
    ctx->pc = 0x241FC8u;
    SET_GPR_U32(ctx, 31, 0x241FD0u);
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x241FC8u, 0x241FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241FD0u;
label_241fd0:
    // 0x241fd0: 0x10000025  b           . + 4 + (0x25 << 2)
label_241fd4:
    if (ctx->pc == 0x241FD4u) {
        ctx->pc = 0x241FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241FD0u;
        // 0x241fd4: 0xe620037c  swc1        $f0, 0x37C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 892), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x241FD8u;
        goto label_241fd8;
    }
    ctx->pc = 0x241FD0u;
    {
        const bool branch_taken_0x241fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241FD0u;
        // 0x241fd4: 0xe620037c  swc1        $f0, 0x37C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 892), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x241fd0) {
            ctx->pc = 0x242068u;
            goto label_242068;
        }
    }
    ctx->pc = 0x241FD8u;
label_241fd8:
    // 0x241fd8: 0x8e24010c  lw          $a0, 0x10C($s1)
    ctx->pc = 0x241fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_241fdc:
    // 0x241fdc: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x241fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_241fe0:
    // 0x241fe0: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x241fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_241fe4:
    // 0x241fe4: 0x40f809  jalr        $v0
label_241fe8:
    if (ctx->pc == 0x241FE8u) {
        ctx->pc = 0x241FECu;
        goto label_241fec;
    }
    ctx->pc = 0x241FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x241FECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241FE4u, 0x241FECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x241FECu;
label_241fec:
    // 0x241fec: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x241fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_241ff0:
    // 0x241ff0: 0x90620032  lbu         $v0, 0x32($v1)
    ctx->pc = 0x241ff0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 50)));
label_241ff4:
    // 0x241ff4: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x241ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
label_241ff8:
    // 0x241ff8: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x241ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
label_241ffc:
    // 0x241ffc: 0xa0620032  sb          $v0, 0x32($v1)
    ctx->pc = 0x241ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 50), (uint8_t)GPR_U32(ctx, 2));
label_242000:
    // 0x242000: 0xc07682a  jal         func_1DA0A8
label_242004:
    if (ctx->pc == 0x242004u) {
        ctx->pc = 0x242004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242000u;
        // 0x242004: 0x8e2400c4  lw          $a0, 0xC4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242008u;
        goto label_242008;
    }
    ctx->pc = 0x242000u;
    SET_GPR_U32(ctx, 31, 0x242008u);
    ctx->pc = 0x242004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242000u;
    // 0x242004: 0x8e2400c4  lw          $a0, 0xC4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA0A8u, 0x242000u, 0x242008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242008u;
label_242008:
    // 0x242008: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x242008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_24200c:
    // 0x24200c: 0x240305a2  addiu       $v1, $zero, 0x5A2
    ctx->pc = 0x24200cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1442));
label_242010:
    // 0x242010: 0xae200fd0  sw          $zero, 0xFD0($s1)
    ctx->pc = 0x242010u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4048), GPR_U32(ctx, 0));
label_242014:
    // 0x242014: 0x8c8200ac  lw          $v0, 0xAC($a0)
    ctx->pc = 0x242014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
label_242018:
    // 0x242018: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_24201c:
    if (ctx->pc == 0x24201Cu) {
        ctx->pc = 0x24201Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242018u;
        // 0x24201c: 0x8c83009c  lw          $v1, 0x9C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242020u;
        goto label_242020;
    }
    ctx->pc = 0x242018u;
    {
        const bool branch_taken_0x242018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x242018) {
            ctx->pc = 0x24201Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242018u;
            // 0x24201c: 0x8c83009c  lw          $v1, 0x9C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242030u;
            goto label_242030;
        }
    }
    ctx->pc = 0x242020u;
label_242020:
    // 0x242020: 0xc069b96  jal         func_1A6E58
label_242024:
    if (ctx->pc == 0x242024u) {
        ctx->pc = 0x242024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242020u;
        // 0x242024: 0x24050683  addiu       $a1, $zero, 0x683 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1667));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242028u;
        goto label_242028;
    }
    ctx->pc = 0x242020u;
    SET_GPR_U32(ctx, 31, 0x242028u);
    ctx->pc = 0x242024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242020u;
    // 0x242024: 0x24050683  addiu       $a1, $zero, 0x683 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1667));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6E58u, 0x242020u, 0x242028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242028u;
label_242028:
    // 0x242028: 0x1000000d  b           . + 4 + (0xD << 2)
label_24202c:
    if (ctx->pc == 0x24202Cu) {
        ctx->pc = 0x24202Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242028u;
        // 0x24202c: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242030u;
        goto label_242030;
    }
    ctx->pc = 0x242028u;
    {
        const bool branch_taken_0x242028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24202Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242028u;
        // 0x24202c: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242028) {
            ctx->pc = 0x242060u;
            goto label_242060;
        }
    }
    ctx->pc = 0x242030u;
label_242030:
    // 0x242030: 0x24020564  addiu       $v0, $zero, 0x564
    ctx->pc = 0x242030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1380));
label_242034:
    // 0x242034: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_242038:
    if (ctx->pc == 0x242038u) {
        ctx->pc = 0x242038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242034u;
        // 0x242038: 0x24020565  addiu       $v0, $zero, 0x565 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1381));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24203Cu;
        goto label_24203c;
    }
    ctx->pc = 0x242034u;
    {
        const bool branch_taken_0x242034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x242038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242034u;
        // 0x242038: 0x24020565  addiu       $v0, $zero, 0x565 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1381));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242034) {
            ctx->pc = 0x242044u;
            goto label_242044;
        }
    }
    ctx->pc = 0x24203Cu;
label_24203c:
    // 0x24203c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_242040:
    if (ctx->pc == 0x242040u) {
        ctx->pc = 0x242044u;
        goto label_242044;
    }
    ctx->pc = 0x24203Cu;
    {
        const bool branch_taken_0x24203c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24203c) {
            ctx->pc = 0x242054u;
            goto label_242054;
        }
    }
    ctx->pc = 0x242044u;
label_242044:
    // 0x242044: 0xc069b96  jal         func_1A6E58
label_242048:
    if (ctx->pc == 0x242048u) {
        ctx->pc = 0x242048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242044u;
        // 0x242048: 0x24050684  addiu       $a1, $zero, 0x684 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1668));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24204Cu;
        goto label_24204c;
    }
    ctx->pc = 0x242044u;
    SET_GPR_U32(ctx, 31, 0x24204Cu);
    ctx->pc = 0x242048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242044u;
    // 0x242048: 0x24050684  addiu       $a1, $zero, 0x684 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1668));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6E58u, 0x242044u, 0x24204Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24204Cu;
label_24204c:
    // 0x24204c: 0x10000004  b           . + 4 + (0x4 << 2)
label_242050:
    if (ctx->pc == 0x242050u) {
        ctx->pc = 0x242050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24204Cu;
        // 0x242050: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242054u;
        goto label_242054;
    }
    ctx->pc = 0x24204Cu;
    {
        const bool branch_taken_0x24204c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24204Cu;
        // 0x242050: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24204c) {
            ctx->pc = 0x242060u;
            goto label_242060;
        }
    }
    ctx->pc = 0x242054u;
label_242054:
    // 0x242054: 0xc069b96  jal         func_1A6E58
label_242058:
    if (ctx->pc == 0x242058u) {
        ctx->pc = 0x242058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242054u;
        // 0x242058: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24205Cu;
        goto label_24205c;
    }
    ctx->pc = 0x242054u;
    SET_GPR_U32(ctx, 31, 0x24205Cu);
    ctx->pc = 0x242058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242054u;
    // 0x242058: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6E58u, 0x242054u, 0x24205Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24205Cu;
label_24205c:
    // 0x24205c: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x24205cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_242060:
    // 0x242060: 0xc06a23e  jal         func_1A88F8
label_242064:
    if (ctx->pc == 0x242064u) {
        ctx->pc = 0x242064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242060u;
        // 0x242064: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242068u;
        goto label_242068;
    }
    ctx->pc = 0x242060u;
    SET_GPR_U32(ctx, 31, 0x242068u);
    ctx->pc = 0x242064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242060u;
    // 0x242064: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x242060u, 0x242068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242068u;
label_242068:
    // 0x242068: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x242068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24206c:
    // 0x24206c: 0xc076e38  jal         func_1DB8E0
label_242070:
    if (ctx->pc == 0x242070u) {
        ctx->pc = 0x242070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24206Cu;
        // 0x242070: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242074u;
        goto label_242074;
    }
    ctx->pc = 0x24206Cu;
    SET_GPR_U32(ctx, 31, 0x242074u);
    ctx->pc = 0x242070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24206Cu;
    // 0x242070: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x24206Cu, 0x242074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242074u;
label_242074:
    // 0x242074: 0x10000012  b           . + 4 + (0x12 << 2)
label_242078:
    if (ctx->pc == 0x242078u) {
        ctx->pc = 0x242078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242074u;
        // 0x242078: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24207Cu;
        goto label_24207c;
    }
    ctx->pc = 0x242074u;
    {
        const bool branch_taken_0x242074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242074u;
        // 0x242078: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242074) {
            ctx->pc = 0x2420C0u;
            goto label_2420c0;
        }
    }
    ctx->pc = 0x24207Cu;
label_24207c:
    // 0x24207c: 0x2403002b  addiu       $v1, $zero, 0x2B
    ctx->pc = 0x24207cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_242080:
    // 0x242080: 0x8c82014c  lw          $v0, 0x14C($a0)
    ctx->pc = 0x242080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 332)));
label_242084:
    // 0x242084: 0x50430005  beql        $v0, $v1, . + 4 + (0x5 << 2)
label_242088:
    if (ctx->pc == 0x242088u) {
        ctx->pc = 0x242088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242084u;
        // 0x242088: 0xc62100d0  lwc1        $f1, 0xD0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24208Cu;
        goto label_24208c;
    }
    ctx->pc = 0x242084u;
    {
        const bool branch_taken_0x242084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x242084) {
            ctx->pc = 0x242088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242084u;
            // 0x242088: 0xc62100d0  lwc1        $f1, 0xD0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24209Cu;
            goto label_24209c;
        }
    }
    ctx->pc = 0x24208Cu;
label_24208c:
    // 0x24208c: 0xc069b56  jal         func_1A6D58
label_242090:
    if (ctx->pc == 0x242090u) {
        ctx->pc = 0x242090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24208Cu;
        // 0x242090: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242094u;
        goto label_242094;
    }
    ctx->pc = 0x24208Cu;
    SET_GPR_U32(ctx, 31, 0x242094u);
    ctx->pc = 0x242090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24208Cu;
    // 0x242090: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6D58u, 0x24208Cu, 0x242094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242094u;
label_242094:
    // 0x242094: 0x1000000a  b           . + 4 + (0xA << 2)
label_242098:
    if (ctx->pc == 0x242098u) {
        ctx->pc = 0x242098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242094u;
        // 0x242098: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24209Cu;
        goto label_24209c;
    }
    ctx->pc = 0x242094u;
    {
        const bool branch_taken_0x242094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242094u;
        // 0x242098: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242094) {
            ctx->pc = 0x2420C0u;
            goto label_2420c0;
        }
    }
    ctx->pc = 0x24209Cu;
label_24209c:
    // 0x24209c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24209cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2420a0:
    // 0x2420a0: 0x0  nop
    ctx->pc = 0x2420a0u;
    // NOP
label_2420a4:
    // 0x2420a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2420a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2420a8:
    // 0x2420a8: 0x0  nop
    ctx->pc = 0x2420a8u;
    // NOP
label_2420ac:
    // 0x2420ac: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_2420b0:
    if (ctx->pc == 0x2420B0u) {
        ctx->pc = 0x2420B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2420ACu;
        // 0x2420b0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2420B4u;
        goto label_2420b4;
    }
    ctx->pc = 0x2420ACu;
    {
        const bool branch_taken_0x2420ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2420B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2420ACu;
        // 0x2420b0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2420ac) {
            ctx->pc = 0x2420C0u;
            goto label_2420c0;
        }
    }
    ctx->pc = 0x2420B4u;
label_2420b4:
    // 0x2420b4: 0xc06991c  jal         func_1A6470
label_2420b8:
    if (ctx->pc == 0x2420B8u) {
        ctx->pc = 0x2420B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2420B4u;
        // 0x2420b8: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2420BCu;
        goto label_2420bc;
    }
    ctx->pc = 0x2420B4u;
    SET_GPR_U32(ctx, 31, 0x2420BCu);
    ctx->pc = 0x2420B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2420B4u;
    // 0x2420b8: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6470u, 0x2420B4u, 0x2420BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2420BCu;
label_2420bc:
    // 0x2420bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2420bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2420c0:
    // 0x2420c0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2420c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2420c4:
    // 0x2420c4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2420c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2420c8:
    // 0x2420c8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2420c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2420cc:
    // 0x2420cc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2420ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2420d0:
    // 0x2420d0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2420d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2420d4:
    // 0x2420d4: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x2420d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2420d8:
    // 0x2420d8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2420d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2420dc:
    // 0x2420dc: 0x3e00008  jr          $ra
label_2420e0:
    if (ctx->pc == 0x2420E0u) {
        ctx->pc = 0x2420E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2420DCu;
        // 0x2420e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2420E4u;
        goto label_2420e4;
    }
    ctx->pc = 0x2420DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2420E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2420DCu;
        // 0x2420e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2420DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2420E4u;
label_2420e4:
    // 0x2420e4: 0x0  nop
    ctx->pc = 0x2420e4u;
    // NOP
    ctx->pc = 0x2420e8u;
}
