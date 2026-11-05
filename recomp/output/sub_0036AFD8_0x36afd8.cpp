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

// Function: sub_0036AFD8
// Address: 0x36afd8 - 0x36b128
void sub_0036AFD8_0x36afd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036AFD8_0x36afd8");
#endif

    switch (ctx->pc) {
        case 0x36b07cu: goto label_36b07c;
        case 0x36b0a4u: goto label_36b0a4;
        case 0x36b0ccu: goto label_36b0cc;
        default: break;
    }

    ctx->pc = 0x36afd8u;

    // 0x36afd8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x36afd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x36afdc: 0xe7bb00c8  swc1        $f27, 0xC8($sp)
    ctx->pc = 0x36afdcu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x36afe0: 0xe7ba00c0  swc1        $f26, 0xC0($sp)
    ctx->pc = 0x36afe0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x36afe4: 0x460086c6  mov.s       $f27, $f16
    ctx->pc = 0x36afe4u;
    ctx->f[27] = FPU_MOV_S(ctx->f[16]);
    // 0x36afe8: 0x46007e86  mov.s       $f26, $f15
    ctx->pc = 0x36afe8u;
    ctx->f[26] = FPU_MOV_S(ctx->f[15]);
    // 0x36afec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36afecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36aff0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36aff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36aff4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36aff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x36aff8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x36aff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x36affc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x36affcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x36b000: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x36b000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x36b004: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x36b004u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b008: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x36b008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x36b00c: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x36b00cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b010: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x36b010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x36b014: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x36b014u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b018: 0xe7bd00d8  swc1        $f29, 0xD8($sp)
    ctx->pc = 0x36b018u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x36b01c: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x36b01cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b020: 0xe7bc00d0  swc1        $f28, 0xD0($sp)
    ctx->pc = 0x36b020u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x36b024: 0x46009f46  mov.s       $f29, $f19
    ctx->pc = 0x36b024u;
    ctx->f[29] = FPU_MOV_S(ctx->f[19]);
    // 0x36b028: 0xe7b900b8  swc1        $f25, 0xB8($sp)
    ctx->pc = 0x36b028u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x36b02c: 0x46009706  mov.s       $f28, $f18
    ctx->pc = 0x36b02cu;
    ctx->f[28] = FPU_MOV_S(ctx->f[18]);
    // 0x36b030: 0xe7b800b0  swc1        $f24, 0xB0($sp)
    ctx->pc = 0x36b030u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x36b034: 0xe7b700a8  swc1        $f23, 0xA8($sp)
    ctx->pc = 0x36b034u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x36b038: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x36b038u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x36b03c: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x36b03cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x36b040: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x36b040u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x36b044: 0xc7af00e8  lwc1        $f15, 0xE8($sp)
    ctx->pc = 0x36b044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x36b048: 0xc7b000f0  lwc1        $f16, 0xF0($sp)
    ctx->pc = 0x36b048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x36b04c: 0xc7b900e0  lwc1        $f25, 0xE0($sp)
    ctx->pc = 0x36b04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x36b050: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x36b050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x36b054: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x36b054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36b058: 0xc7b70108  lwc1        $f23, 0x108($sp)
    ctx->pc = 0x36b058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x36b05c: 0xc7b60110  lwc1        $f22, 0x110($sp)
    ctx->pc = 0x36b05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x36b060: 0x8fb30118  lw          $s3, 0x118($sp)
    ctx->pc = 0x36b060u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x36b064: 0x8fb20120  lw          $s2, 0x120($sp)
    ctx->pc = 0x36b064u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x36b068: 0x8fb10128  lw          $s1, 0x128($sp)
    ctx->pc = 0x36b068u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x36b06c: 0x8fb00130  lw          $s0, 0x130($sp)
    ctx->pc = 0x36b06cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x36b070: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x36b070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x36b074: 0xc0daaf0  jal         func_36ABC0
    ctx->pc = 0x36B074u;
    SET_GPR_U32(ctx, 31, 0x36B07Cu);
    ctx->pc = 0x36B078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B074u;
    // 0x36b078: 0x46008e06  mov.s       $f24, $f17 (Delay Slot)
    ctx->f[24] = FPU_MOV_S(ctx->f[17]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36ABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36ABC0u, 0x36B074u, 0x36B07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B07Cu;
label_36b07c:
    // 0x36b07c: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x36b07cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x36b080: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x36b080u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x36b084: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x36b084u;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    // 0x36b088: 0x4600db46  mov.s       $f13, $f27
    ctx->pc = 0x36b088u;
    ctx->f[13] = FPU_MOV_S(ctx->f[27]);
    // 0x36b08c: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x36b08cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
    // 0x36b090: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x36b090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b094: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x36b094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b098: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x36b098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b09c: 0xc0daaf0  jal         func_36ABC0
    ctx->pc = 0x36B09Cu;
    SET_GPR_U32(ctx, 31, 0x36B0A4u);
    ctx->pc = 0x36B0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B09Cu;
    // 0x36b0a0: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36ABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36ABC0u, 0x36B09Cu, 0x36B0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B0A4u;
label_36b0a4:
    // 0x36b0a4: 0x4600e306  mov.s       $f12, $f28
    ctx->pc = 0x36b0a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[28]);
    // 0x36b0a8: 0x4600eb46  mov.s       $f13, $f29
    ctx->pc = 0x36b0a8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[29]);
    // 0x36b0ac: 0x4600cb86  mov.s       $f14, $f25
    ctx->pc = 0x36b0acu;
    ctx->f[14] = FPU_MOV_S(ctx->f[25]);
    // 0x36b0b0: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x36b0b0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
    // 0x36b0b4: 0x4600b406  mov.s       $f16, $f22
    ctx->pc = 0x36b0b4u;
    ctx->f[16] = FPU_MOV_S(ctx->f[22]);
    // 0x36b0b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x36b0b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b0bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x36b0bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b0c0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36b0c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b0c4: 0xc0daaf0  jal         func_36ABC0
    ctx->pc = 0x36B0C4u;
    SET_GPR_U32(ctx, 31, 0x36B0CCu);
    ctx->pc = 0x36B0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B0C4u;
    // 0x36b0c8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36ABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36ABC0u, 0x36B0C4u, 0x36B0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B0CCu;
label_36b0cc:
    // 0x36b0cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36b0ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36b0d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36b0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36b0d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36b0d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36b0d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36b0d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36b0dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x36b0dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36b0e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x36b0e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36b0e4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x36b0e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36b0e8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x36b0e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36b0ec: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x36b0ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x36b0f0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x36b0f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x36b0f4: 0xc7bd00d8  lwc1        $f29, 0xD8($sp)
    ctx->pc = 0x36b0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x36b0f8: 0xc7bc00d0  lwc1        $f28, 0xD0($sp)
    ctx->pc = 0x36b0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x36b0fc: 0xc7bb00c8  lwc1        $f27, 0xC8($sp)
    ctx->pc = 0x36b0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x36b100: 0xc7ba00c0  lwc1        $f26, 0xC0($sp)
    ctx->pc = 0x36b100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x36b104: 0xc7b900b8  lwc1        $f25, 0xB8($sp)
    ctx->pc = 0x36b104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x36b108: 0xc7b800b0  lwc1        $f24, 0xB0($sp)
    ctx->pc = 0x36b108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x36b10c: 0xc7b700a8  lwc1        $f23, 0xA8($sp)
    ctx->pc = 0x36b10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x36b110: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x36b110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x36b114: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x36b114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x36b118: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x36b118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36b11c: 0x3e00008  jr          $ra
    ctx->pc = 0x36B11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B11Cu;
        // 0x36b120: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B11Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B124u;
    // 0x36b124: 0x0  nop
    ctx->pc = 0x36b124u;
    // NOP
    ctx->pc = 0x36b128u;
}
