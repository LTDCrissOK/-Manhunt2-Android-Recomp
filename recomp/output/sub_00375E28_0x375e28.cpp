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

// Function: sub_00375E28
// Address: 0x375e28 - 0x3760f0
void sub_00375E28_0x375e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375E28_0x375e28");
#endif

    switch (ctx->pc) {
        case 0x375edcu: goto label_375edc;
        case 0x375f1cu: goto label_375f1c;
        case 0x375f88u: goto label_375f88;
        case 0x375fc8u: goto label_375fc8;
        case 0x376034u: goto label_376034;
        case 0x376040u: goto label_376040;
        case 0x37606cu: goto label_37606c;
        case 0x37607cu: goto label_37607c;
        case 0x3760a8u: goto label_3760a8;
        case 0x3760b8u: goto label_3760b8;
        default: break;
    }

    ctx->pc = 0x375e28u;

    // 0x375e28: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x375e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x375e2c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x375e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x375e30: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x375e30u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    // 0x375e34: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x375e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x375e38: 0x8e62cd34  lw          $v0, -0x32CC($s3)
    ctx->pc = 0x375e38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FCD34u));
    // 0x375e3c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x375e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x375e40: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x375e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x375e44: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x375e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x375e48: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x375e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x375e4c: 0xe7b80060  swc1        $f24, 0x60($sp)
    ctx->pc = 0x375e4cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x375e50: 0xe7b70058  swc1        $f23, 0x58($sp)
    ctx->pc = 0x375e50u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x375e54: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x375e54u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x375e58: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x375e58u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x375e5c: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x375E5Cu;
    {
        const bool branch_taken_0x375e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x375E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375E5Cu;
        // 0x375e60: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x375e5c) {
            ctx->pc = 0x37604Cu;
            goto label_37604c;
        }
    }
    ctx->pc = 0x375E64u;
    // 0x375e64: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x375e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x375e68: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x375e68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x375e6c: 0x24516028  addiu       $s1, $v0, 0x6028
    ctx->pc = 0x375e6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 24616));
    // 0x375e70: 0xc4556028  lwc1        $f21, 0x6028($v0)
    ctx->pc = 0x375e70u;
    { uint32_t bits = FAST_READ32(0x6C6028u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x375e74: 0xc6340004  lwc1        $f20, 0x4($s1)
    ctx->pc = 0x375e74u;
    { uint32_t bits = FAST_READ32(0x6C602Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x375e78: 0x24625da0  addiu       $v0, $v1, 0x5DA0
    ctx->pc = 0x375e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23968));
    // 0x375e7c: 0x4600a847  neg.s       $f1, $f21
    ctx->pc = 0x375e7cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[21]);
    // 0x375e80: 0xc4560004  lwc1        $f22, 0x4($v0)
    ctx->pc = 0x375e80u;
    { uint32_t bits = FAST_READ32(0x655DA4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x375e84: 0x0  nop
    ctx->pc = 0x375e84u;
    // NOP
    // 0x375e88: 0x0  nop
    ctx->pc = 0x375e88u;
    // NOP
    // 0x375e8c: 0x4614ad03  div.s       $f20, $f21, $f20
    ctx->pc = 0x375e8cu;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[21], ctx->f[20]); }
    // 0x375e90: 0xc4605da0  lwc1        $f0, 0x5DA0($v1)
    ctx->pc = 0x375e90u;
    { uint32_t bits = FAST_READ32(0x655DA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375e94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x375e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x375e98: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x375e98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x375e9c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x375e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375ea0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x375ea0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x375ea4: 0x0  nop
    ctx->pc = 0x375ea4u;
    // NOP
    // 0x375ea8: 0x0  nop
    ctx->pc = 0x375ea8u;
    // NOP
    // 0x375eac: 0x4600ad43  div.s       $f21, $f21, $f0
    ctx->pc = 0x375eacu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x375eb0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x375eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x375eb4: 0x3c120065  lui         $s2, 0x65
    ctx->pc = 0x375eb4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)101 << 16));
    // 0x375eb8: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x375eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x375ebc: 0x26505db0  addiu       $s0, $s2, 0x5DB0
    ctx->pc = 0x375ebcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 23984));
    // 0x375ec0: 0x0  nop
    ctx->pc = 0x375ec0u;
    // NOP
    // 0x375ec4: 0x0  nop
    ctx->pc = 0x375ec4u;
    // NOP
    // 0x375ec8: 0x4616a583  div.s       $f22, $f20, $f22
    ctx->pc = 0x375ec8u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[20], ctx->f[22]); }
    // 0x375ecc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x375eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x375ed0: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x375ed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x375ed4: 0xc0df52a  jal         func_37D4A8
    ctx->pc = 0x375ED4u;
    SET_GPR_U32(ctx, 31, 0x375EDCu);
    ctx->pc = 0x375ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375ED4u;
    // 0x375ed8: 0xe7b70000  swc1        $f23, 0x0($sp) (Delay Slot)
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D4A8u, 0x375ED4u, 0x375EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375EDCu;
label_375edc:
    // 0x375edc: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x375edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375ee0: 0x4600a507  neg.s       $f20, $f20
    ctx->pc = 0x375ee0u;
    ctx->f[20] = FPU_NEG_S(ctx->f[20]);
    // 0x375ee4: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x375ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x375ee8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x375ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375eec: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x375eecu;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x375ef0: 0xe7b70000  swc1        $f23, 0x0($sp)
    ctx->pc = 0x375ef0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x375ef4: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x375ef4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x375ef8: 0xe60200a8  swc1        $f2, 0xA8($s0)
    ctx->pc = 0x375ef8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x375efc: 0xe6000088  swc1        $f0, 0x88($s0)
    ctx->pc = 0x375efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    // 0x375f00: 0xe601008c  swc1        $f1, 0x8C($s0)
    ctx->pc = 0x375f00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x375f04: 0xe60200ac  swc1        $f2, 0xAC($s0)
    ctx->pc = 0x375f04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x375f08: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x375f08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x375f0c: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x375f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
    // 0x375f10: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x375f10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x375f14: 0xc0df52a  jal         func_37D4A8
    ctx->pc = 0x375F14u;
    SET_GPR_U32(ctx, 31, 0x375F1Cu);
    ctx->pc = 0x375F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375F14u;
    // 0x375f18: 0xae0000b8  sw          $zero, 0xB8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D4A8u, 0x375F14u, 0x375F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375F1Cu;
label_375f1c:
    // 0x375f1c: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x375f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x375f20: 0x4600ad47  neg.s       $f21, $f21
    ctx->pc = 0x375f20u;
    ctx->f[21] = FPU_NEG_S(ctx->f[21]);
    // 0x375f24: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x375f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375f28: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x375f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375f2c: 0x46002047  neg.s       $f1, $f4
    ctx->pc = 0x375f2cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[4]);
    // 0x375f30: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x375f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x375f34: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x375f34u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x375f38: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x375f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x375f3c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x375f3cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x375f40: 0xe60300a0  swc1        $f3, 0xA0($s0)
    ctx->pc = 0x375f40u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x375f44: 0xe6010090  swc1        $f1, 0x90($s0)
    ctx->pc = 0x375f44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x375f48: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x375f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x375f4c: 0xe6020078  swc1        $f2, 0x78($s0)
    ctx->pc = 0x375f4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x375f50: 0xe7b70000  swc1        $f23, 0x0($sp)
    ctx->pc = 0x375f50u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x375f54: 0xe6040094  swc1        $f4, 0x94($s0)
    ctx->pc = 0x375f54u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x375f58: 0xe60300a4  swc1        $f3, 0xA4($s0)
    ctx->pc = 0x375f58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x375f5c: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x375f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x375f60: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x375f60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x375f64: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x375f64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x375f68: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x375f68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
    // 0x375f6c: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x375f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x375f70: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x375f70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x375f74: 0xe617006c  swc1        $f23, 0x6C($s0)
    ctx->pc = 0x375f74u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
    // 0x375f78: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x375f78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x375f7c: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x375f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x375f80: 0xc0df52a  jal         func_37D4A8
    ctx->pc = 0x375F80u;
    SET_GPR_U32(ctx, 31, 0x375F88u);
    ctx->pc = 0x375F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375F80u;
    // 0x375f84: 0xe6180068  swc1        $f24, 0x68($s0) (Delay Slot)
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D4A8u, 0x375F80u, 0x375F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375F88u;
label_375f88:
    // 0x375f88: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x375f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375f8c: 0x4600b587  neg.s       $f22, $f22
    ctx->pc = 0x375f8cu;
    ctx->f[22] = FPU_NEG_S(ctx->f[22]);
    // 0x375f90: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x375f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x375f94: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x375f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375f98: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x375f98u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x375f9c: 0xe7b70000  swc1        $f23, 0x0($sp)
    ctx->pc = 0x375f9cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x375fa0: 0xe7b60004  swc1        $f22, 0x4($sp)
    ctx->pc = 0x375fa0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x375fa4: 0xe6020060  swc1        $f2, 0x60($s0)
    ctx->pc = 0x375fa4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x375fa8: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x375fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x375fac: 0xe6010044  swc1        $f1, 0x44($s0)
    ctx->pc = 0x375facu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x375fb0: 0xe6020064  swc1        $f2, 0x64($s0)
    ctx->pc = 0x375fb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x375fb4: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x375fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x375fb8: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x375fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x375fbc: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x375fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x375fc0: 0xc0df52a  jal         func_37D4A8
    ctx->pc = 0x375FC0u;
    SET_GPR_U32(ctx, 31, 0x375FC8u);
    ctx->pc = 0x375FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375FC0u;
    // 0x375fc4: 0xae000070  sw          $zero, 0x70($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D4A8u, 0x375FC0u, 0x375FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375FC8u;
label_375fc8:
    // 0x375fc8: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x375fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x375fcc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x375fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x375fd0: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x375fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375fd4: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x375fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x375fd8: 0x46002047  neg.s       $f1, $f4
    ctx->pc = 0x375fd8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[4]);
    // 0x375fdc: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x375fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x375fe0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x375fe0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x375fe4: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x375fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x375fe8: 0x8c44cd38  lw          $a0, -0x32C8($v0)
    ctx->pc = 0x375fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FCD38u));
    // 0x375fec: 0x24a5f600  addiu       $a1, $a1, -0xA00
    ctx->pc = 0x375fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964736));
    // 0x375ff0: 0xe6010018  swc1        $f1, 0x18($s0)
    ctx->pc = 0x375ff0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x375ff4: 0xe6020028  swc1        $f2, 0x28($s0)
    ctx->pc = 0x375ff4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x375ff8: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x375ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x375ffc: 0xe6170024  swc1        $f23, 0x24($s0)
    ctx->pc = 0x375ffcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x376000: 0xae405db0  sw          $zero, 0x5DB0($s2)
    ctx->pc = 0x376000u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 23984), GPR_U32(ctx, 0));
    // 0x376004: 0xe6030030  swc1        $f3, 0x30($s0)
    ctx->pc = 0x376004u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x376008: 0xe604001c  swc1        $f4, 0x1C($s0)
    ctx->pc = 0x376008u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x37600c: 0xe602002c  swc1        $f2, 0x2C($s0)
    ctx->pc = 0x37600cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x376010: 0xe6180020  swc1        $f24, 0x20($s0)
    ctx->pc = 0x376010u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x376014: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x376014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x376018: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x376018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x37601c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x37601cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x376020: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x376020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x376024: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x376024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x376028: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x376028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x37602c: 0xc0dfdf6  jal         func_37F7D8
    ctx->pc = 0x37602Cu;
    SET_GPR_U32(ctx, 31, 0x376034u);
    ctx->pc = 0x376030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37602Cu;
    // 0x376030: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F7D8u, 0x37602Cu, 0x376034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376034u;
label_376034:
    // 0x376034: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x376034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376038: 0xc0dde32  jal         func_3778C8
    ctx->pc = 0x376038u;
    SET_GPR_U32(ctx, 31, 0x376040u);
    ctx->pc = 0x37603Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376038u;
    // 0x37603c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3778C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3778C8u, 0x376038u, 0x376040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376040u;
label_376040:
    // 0x376040: 0x8e62cd34  lw          $v0, -0x32CC($s3)
    ctx->pc = 0x376040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954292)));
    // 0x376044: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x376044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x376048: 0xae62cd34  sw          $v0, -0x32CC($s3)
    ctx->pc = 0x376048u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294954292), GPR_U32(ctx, 2));
label_37604c:
    // 0x37604c: 0x8e62cd34  lw          $v0, -0x32CC($s3)
    ctx->pc = 0x37604cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954292)));
    // 0x376050: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x376050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x376054: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x376054u;
    {
        const bool branch_taken_0x376054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x376058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376054u;
        // 0x376058: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376054) {
            ctx->pc = 0x376088u;
            goto label_376088;
        }
    }
    ctx->pc = 0x37605Cu;
    // 0x37605c: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x37605cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x376060: 0x8c44cd38  lw          $a0, -0x32C8($v0)
    ctx->pc = 0x376060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954296)));
    // 0x376064: 0xc0dfdf6  jal         func_37F7D8
    ctx->pc = 0x376064u;
    SET_GPR_U32(ctx, 31, 0x37606Cu);
    ctx->pc = 0x376068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376064u;
    // 0x376068: 0x24a5f668  addiu       $a1, $a1, -0x998 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F7D8u, 0x376064u, 0x37606Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37606Cu;
label_37606c:
    // 0x37606c: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x37606cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x376070: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x376070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376074: 0xc0dde42  jal         func_377908
    ctx->pc = 0x376074u;
    SET_GPR_U32(ctx, 31, 0x37607Cu);
    ctx->pc = 0x376078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376074u;
    // 0x376078: 0x24a55b80  addiu       $a1, $a1, 0x5B80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377908u, 0x376074u, 0x37607Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37607Cu;
label_37607c:
    // 0x37607c: 0x8e62cd34  lw          $v0, -0x32CC($s3)
    ctx->pc = 0x37607cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954292)));
    // 0x376080: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x376080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x376084: 0xae62cd34  sw          $v0, -0x32CC($s3)
    ctx->pc = 0x376084u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294954292), GPR_U32(ctx, 2));
label_376088:
    // 0x376088: 0x8e62cd34  lw          $v0, -0x32CC($s3)
    ctx->pc = 0x376088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954292)));
    // 0x37608c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x37608cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x376090: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x376090u;
    {
        const bool branch_taken_0x376090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x376094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376090u;
        // 0x376094: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376090) {
            ctx->pc = 0x3760B8u;
            goto label_3760b8;
        }
    }
    ctx->pc = 0x376098u;
    // 0x376098: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x376098u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x37609c: 0x8c44cd38  lw          $a0, -0x32C8($v0)
    ctx->pc = 0x37609cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954296)));
    // 0x3760a0: 0xc0dfdf6  jal         func_37F7D8
    ctx->pc = 0x3760A0u;
    SET_GPR_U32(ctx, 31, 0x3760A8u);
    ctx->pc = 0x3760A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3760A0u;
    // 0x3760a4: 0x24a5f688  addiu       $a1, $a1, -0x978 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F7D8u, 0x3760A0u, 0x3760A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3760A8u;
label_3760a8:
    // 0x3760a8: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x3760a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x3760ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3760acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3760b0: 0xc0dde42  jal         func_377908
    ctx->pc = 0x3760B0u;
    SET_GPR_U32(ctx, 31, 0x3760B8u);
    ctx->pc = 0x3760B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3760B0u;
    // 0x3760b4: 0x24a55b40  addiu       $a1, $a1, 0x5B40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377908u, 0x3760B0u, 0x3760B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3760B8u;
label_3760b8:
    // 0x3760b8: 0xae60cd34  sw          $zero, -0x32CC($s3)
    ctx->pc = 0x3760b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294954292), GPR_U32(ctx, 0));
    // 0x3760bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3760bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3760c0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3760c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3760c4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3760c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3760c8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x3760c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3760cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3760ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3760d0: 0xc7b80060  lwc1        $f24, 0x60($sp)
    ctx->pc = 0x3760d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x3760d4: 0xc7b70058  lwc1        $f23, 0x58($sp)
    ctx->pc = 0x3760d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3760d8: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x3760d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3760dc: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x3760dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3760e0: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x3760e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3760e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3760E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3760E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3760E4u;
        // 0x3760e8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3760E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3760ECu;
    // 0x3760ec: 0x0  nop
    ctx->pc = 0x3760ecu;
    // NOP
    ctx->pc = 0x3760f0u;
}
