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

// Function: sub_00358EC0
// Address: 0x358ec0 - 0x359030
void sub_00358EC0_0x358ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358EC0_0x358ec0");
#endif

    switch (ctx->pc) {
        case 0x358f00u: goto label_358f00;
        case 0x358f08u: goto label_358f08;
        case 0x358ff8u: goto label_358ff8;
        case 0x35900cu: goto label_35900c;
        default: break;
    }

    ctx->pc = 0x358ec0u;

    // 0x358ec0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x358ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x358ec4: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x358ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x358ec8: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x358ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x358ecc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x358eccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358ed0: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x358ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x358ed4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x358ed4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358ed8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x358ed8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358edc: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x358edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x358ee0: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x358ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x358ee4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x358ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358ee8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x358ee8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358eec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x358eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358ef0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x358ef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358ef4: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x358ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x358ef8: 0xc0dab74  jal         func_36ADD0
    ctx->pc = 0x358EF8u;
    SET_GPR_U32(ctx, 31, 0x358F00u);
    ctx->pc = 0x358EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358EF8u;
    // 0x358efc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36ADD0u, 0x358EF8u, 0x358F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358F00u;
label_358f00:
    // 0x358f00: 0x1a400040  blez        $s2, . + 4 + (0x40 << 2)
    ctx->pc = 0x358F00u;
    {
        const bool branch_taken_0x358f00 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x358F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358F00u;
        // 0x358f04: 0x24020048  addiu       $v0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358f00) {
            ctx->pc = 0x359004u;
            goto label_359004;
        }
    }
    ctx->pc = 0x358F08u;
label_358f08:
    // 0x358f08: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x358f08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x358f0c: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x358f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x358f10: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x358f10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x358f14: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x358f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x358f18: 0x2235821  addu        $t3, $s1, $v1
    ctx->pc = 0x358f18u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x358f1c: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x358F1Cu;
    {
        const bool branch_taken_0x358f1c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x358F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358F1Cu;
        // 0x358f20: 0x2227021  addu        $t6, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358f1c) {
            ctx->pc = 0x358F34u;
            goto label_358f34;
        }
    }
    ctx->pc = 0x358F24u;
    // 0x358f24: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x358f24u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358f28: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x358f28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358f2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x358F2Cu;
    {
        const bool branch_taken_0x358f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358F2Cu;
        // 0x358f30: 0x140602d  daddu       $t4, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358f2c) {
            ctx->pc = 0x358F40u;
            goto label_358f40;
        }
    }
    ctx->pc = 0x358F34u;
label_358f34:
    // 0x358f34: 0x8d6c0014  lw          $t4, 0x14($t3)
    ctx->pc = 0x358f34u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 20)));
    // 0x358f38: 0x8ce60014  lw          $a2, 0x14($a3)
    ctx->pc = 0x358f38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x358f3c: 0x180502d  daddu       $t2, $t4, $zero
    ctx->pc = 0x358f3cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_358f40:
    // 0x358f40: 0xc5620008  lwc1        $f2, 0x8($t3)
    ctx->pc = 0x358f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x358f44: 0xc1c02  srl         $v1, $t4, 16
    ctx->pc = 0x358f44u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x358f48: 0xc4e3000c  lwc1        $f3, 0xC($a3)
    ctx->pc = 0x358f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x358f4c: 0xc1202  srl         $v0, $t4, 8
    ctx->pc = 0x358f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), 8));
    // 0x358f50: 0xc4e40010  lwc1        $f4, 0x10($a3)
    ctx->pc = 0x358f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x358f54: 0xc6e02  srl         $t5, $t4, 24
    ctx->pc = 0x358f54u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 12), 24));
    // 0x358f58: 0xc561000c  lwc1        $f1, 0xC($t3)
    ctx->pc = 0x358f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x358f5c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x358f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x358f60: 0xc5600010  lwc1        $f0, 0x10($t3)
    ctx->pc = 0x358f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x358f64: 0x62402  srl         $a0, $a2, 16
    ctx->pc = 0x358f64u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x358f68: 0xc4ee0008  lwc1        $f14, 0x8($a3)
    ctx->pc = 0x358f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x358f6c: 0x62a02  srl         $a1, $a2, 8
    ctx->pc = 0x358f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x358f70: 0xc5730004  lwc1        $f19, 0x4($t3)
    ctx->pc = 0x358f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x358f74: 0xa4402  srl         $t0, $t2, 16
    ctx->pc = 0x358f74u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x358f78: 0xc4ec0000  lwc1        $f12, 0x0($a3)
    ctx->pc = 0x358f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x358f7c: 0xa4a02  srl         $t1, $t2, 8
    ctx->pc = 0x358f7cu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 10), 8));
    // 0x358f80: 0xc4ed0004  lwc1        $f13, 0x4($a3)
    ctx->pc = 0x358f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x358f84: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x358f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x358f88: 0xc5720000  lwc1        $f18, 0x0($t3)
    ctx->pc = 0x358f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x358f8c: 0x318c00ff  andi        $t4, $t4, 0xFF
    ctx->pc = 0x358f8cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)255);
    // 0x358f90: 0xc5c5000c  lwc1        $f5, 0xC($t6)
    ctx->pc = 0x358f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x358f94: 0x63e02  srl         $a3, $a2, 24
    ctx->pc = 0x358f94u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x358f98: 0xc5c60010  lwc1        $f6, 0x10($t6)
    ctx->pc = 0x358f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x358f9c: 0xa5e02  srl         $t3, $t2, 24
    ctx->pc = 0x358f9cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 24));
    // 0x358fa0: 0xc5d10008  lwc1        $f17, 0x8($t6)
    ctx->pc = 0x358fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x358fa4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x358fa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x358fa8: 0xc5cf0000  lwc1        $f15, 0x0($t6)
    ctx->pc = 0x358fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x358fac: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x358facu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x358fb0: 0xc5d00004  lwc1        $f16, 0x4($t6)
    ctx->pc = 0x358fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x358fb4: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x358fb4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x358fb8: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x358fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x358fbc: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x358fbcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x358fc0: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x358fc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x358fc4: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x358fc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x358fc8: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x358fc8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x358fcc: 0x314a00ff  andi        $t2, $t2, 0xFF
    ctx->pc = 0x358fccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x358fd0: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x358fd0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x358fd4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x358fd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x358fd8: 0xe7a50018  swc1        $f5, 0x18($sp)
    ctx->pc = 0x358fd8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x358fdc: 0xe7a60020  swc1        $f6, 0x20($sp)
    ctx->pc = 0x358fdcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x358fe0: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x358fe0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x358fe4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x358fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x358fe8: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x358fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x358fec: 0xafac0048  sw          $t4, 0x48($sp)
    ctx->pc = 0x358fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 12));
    // 0x358ff0: 0xc0dabf6  jal         func_36AFD8
    ctx->pc = 0x358FF0u;
    SET_GPR_U32(ctx, 31, 0x358FF8u);
    ctx->pc = 0x358FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358FF0u;
    // 0x358ff4: 0xafad0050  sw          $t5, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36AFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36AFD8u, 0x358FF0u, 0x358FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358FF8u;
label_358ff8:
    // 0x358ff8: 0x212182a  slt         $v1, $s0, $s2
    ctx->pc = 0x358ff8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x358ffc: 0x1460ffc2  bnez        $v1, . + 4 + (-0x3E << 2)
    ctx->pc = 0x358FFCu;
    {
        const bool branch_taken_0x358ffc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x359000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358FFCu;
        // 0x359000: 0x24020048  addiu       $v0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358ffc) {
            ctx->pc = 0x358F08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_358f08;
        }
    }
    ctx->pc = 0x359004u;
label_359004:
    // 0x359004: 0xc0dab7e  jal         func_36ADF8
    ctx->pc = 0x359004u;
    SET_GPR_U32(ctx, 31, 0x35900Cu);
    ctx->pc = 0x359008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359004u;
    // 0x359008: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36ADF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36ADF8u, 0x359004u, 0x35900Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35900Cu;
label_35900c:
    // 0x35900c: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x35900cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x359010: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x359010u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x359014: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x359014u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x359018: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x359018u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x35901c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x35901cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x359020: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x359020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x359024: 0x3e00008  jr          $ra
    ctx->pc = 0x359024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359024u;
        // 0x359028: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35902Cu;
    // 0x35902c: 0x0  nop
    ctx->pc = 0x35902cu;
    // NOP
    ctx->pc = 0x359030u;
}
