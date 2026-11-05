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

// Function: sub_00185958
// Address: 0x185958 - 0x186358
void sub_00185958_0x185958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185958_0x185958");
#endif

    switch (ctx->pc) {
        case 0x1859d0u: goto label_1859d0;
        case 0x1859e0u: goto label_1859e0;
        case 0x1859f4u: goto label_1859f4;
        case 0x185a08u: goto label_185a08;
        case 0x185a1cu: goto label_185a1c;
        case 0x185a30u: goto label_185a30;
        case 0x185a44u: goto label_185a44;
        case 0x185a58u: goto label_185a58;
        case 0x185a6cu: goto label_185a6c;
        case 0x185a80u: goto label_185a80;
        case 0x185a94u: goto label_185a94;
        case 0x185aa8u: goto label_185aa8;
        case 0x185abcu: goto label_185abc;
        case 0x185ae8u: goto label_185ae8;
        case 0x185b10u: goto label_185b10;
        case 0x185b38u: goto label_185b38;
        case 0x185b68u: goto label_185b68;
        case 0x185b90u: goto label_185b90;
        case 0x185bb8u: goto label_185bb8;
        case 0x185bfcu: goto label_185bfc;
        case 0x185c0cu: goto label_185c0c;
        case 0x185c18u: goto label_185c18;
        case 0x185c24u: goto label_185c24;
        case 0x185c30u: goto label_185c30;
        case 0x185c3cu: goto label_185c3c;
        case 0x185c4cu: goto label_185c4c;
        case 0x185c70u: goto label_185c70;
        case 0x185c94u: goto label_185c94;
        case 0x185cb8u: goto label_185cb8;
        case 0x185cdcu: goto label_185cdc;
        case 0x185d0cu: goto label_185d0c;
        case 0x185d18u: goto label_185d18;
        case 0x185d28u: goto label_185d28;
        case 0x185d48u: goto label_185d48;
        case 0x185d6cu: goto label_185d6c;
        case 0x185d90u: goto label_185d90;
        case 0x185db4u: goto label_185db4;
        case 0x185de8u: goto label_185de8;
        case 0x185df4u: goto label_185df4;
        case 0x185e04u: goto label_185e04;
        case 0x185e24u: goto label_185e24;
        case 0x185e48u: goto label_185e48;
        case 0x185e6cu: goto label_185e6c;
        case 0x185e90u: goto label_185e90;
        case 0x185eccu: goto label_185ecc;
        case 0x185ed8u: goto label_185ed8;
        case 0x185ee8u: goto label_185ee8;
        case 0x185f0cu: goto label_185f0c;
        case 0x185f30u: goto label_185f30;
        case 0x185f54u: goto label_185f54;
        case 0x185f78u: goto label_185f78;
        case 0x185f94u: goto label_185f94;
        case 0x185fd0u: goto label_185fd0;
        case 0x185fdcu: goto label_185fdc;
        case 0x185fecu: goto label_185fec;
        case 0x186018u: goto label_186018;
        case 0x18603cu: goto label_18603c;
        case 0x186060u: goto label_186060;
        case 0x186088u: goto label_186088;
        case 0x1860acu: goto label_1860ac;
        case 0x1860d0u: goto label_1860d0;
        case 0x1860f4u: goto label_1860f4;
        case 0x186118u: goto label_186118;
        case 0x18613cu: goto label_18613c;
        case 0x186160u: goto label_186160;
        case 0x186188u: goto label_186188;
        case 0x1861acu: goto label_1861ac;
        case 0x1861c8u: goto label_1861c8;
        case 0x1861d0u: goto label_1861d0;
        case 0x1861e0u: goto label_1861e0;
        case 0x1861ecu: goto label_1861ec;
        case 0x1861f8u: goto label_1861f8;
        case 0x186204u: goto label_186204;
        case 0x186210u: goto label_186210;
        case 0x18621cu: goto label_18621c;
        case 0x186228u: goto label_186228;
        case 0x186234u: goto label_186234;
        case 0x186240u: goto label_186240;
        case 0x18624cu: goto label_18624c;
        case 0x186258u: goto label_186258;
        case 0x186264u: goto label_186264;
        case 0x186274u: goto label_186274;
        case 0x186280u: goto label_186280;
        case 0x18628cu: goto label_18628c;
        case 0x186298u: goto label_186298;
        case 0x1862a4u: goto label_1862a4;
        case 0x1862b0u: goto label_1862b0;
        case 0x1862bcu: goto label_1862bc;
        case 0x1862c8u: goto label_1862c8;
        case 0x1862d4u: goto label_1862d4;
        case 0x1862e0u: goto label_1862e0;
        case 0x1862ecu: goto label_1862ec;
        case 0x1862f8u: goto label_1862f8;
        default: break;
    }

    ctx->pc = 0x185958u;

    // 0x185958: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x185958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x18595c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x18595cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x185960: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x185960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x185964: 0x8c6207dc  lw          $v0, 0x7DC($v1)
    ctx->pc = 0x185964u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F07DCu));
    // 0x185968: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x185968u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18596c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18596cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x185970: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x185970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x185974: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x185974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x185978: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x185978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x18597c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x18597cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x185980: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x185980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x185984: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x185984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x185988: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x185988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18598c: 0xe7bf00a8  swc1        $f31, 0xA8($sp)
    ctx->pc = 0x18598cu;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x185990: 0xe7be00a0  swc1        $f30, 0xA0($sp)
    ctx->pc = 0x185990u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x185994: 0xe7bd0098  swc1        $f29, 0x98($sp)
    ctx->pc = 0x185994u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x185998: 0xe7bc0090  swc1        $f28, 0x90($sp)
    ctx->pc = 0x185998u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x18599c: 0xe7bb0088  swc1        $f27, 0x88($sp)
    ctx->pc = 0x18599cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1859a0: 0xe7ba0080  swc1        $f26, 0x80($sp)
    ctx->pc = 0x1859a0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1859a4: 0xe7b90078  swc1        $f25, 0x78($sp)
    ctx->pc = 0x1859a4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1859a8: 0xe7b80070  swc1        $f24, 0x70($sp)
    ctx->pc = 0x1859a8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1859ac: 0xe7b70068  swc1        $f23, 0x68($sp)
    ctx->pc = 0x1859acu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1859b0: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x1859b0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1859b4: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x1859b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1859b8: 0x1440024f  bnez        $v0, . + 4 + (0x24F << 2)
    ctx->pc = 0x1859B8u;
    {
        const bool branch_taken_0x1859b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1859BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1859B8u;
        // 0x1859bc: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1859b8) {
            ctx->pc = 0x1862F8u;
            goto label_1862f8;
        }
    }
    ctx->pc = 0x1859C0u;
    // 0x1859c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1859c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1859c4: 0xac6207dc  sw          $v0, 0x7DC($v1)
    ctx->pc = 0x1859c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2012), GPR_U32(ctx, 2));
    // 0x1859c8: 0xc0604de  jal         func_181378
    ctx->pc = 0x1859C8u;
    SET_GPR_U32(ctx, 31, 0x1859D0u);
    ctx->pc = 0x1859CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1859C8u;
    // 0x1859cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181378u, 0x1859C8u, 0x1859D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1859D0u;
label_1859d0:
    // 0x1859d0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1859d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1859d4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1859d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1859d8: 0xc0605b6  jal         func_1816D8
    ctx->pc = 0x1859D8u;
    SET_GPR_U32(ctx, 31, 0x1859E0u);
    ctx->pc = 0x1859DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1859D8u;
    // 0x1859dc: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1816D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1816D8u, 0x1859D8u, 0x1859E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1859E0u;
label_1859e0:
    // 0x1859e0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1859e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1859e4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1859e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1859e8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1859e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1859ec: 0xc06148c  jal         func_185230
    ctx->pc = 0x1859ECu;
    SET_GPR_U32(ctx, 31, 0x1859F4u);
    ctx->pc = 0x1859F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1859ECu;
    // 0x1859f0: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185230u, 0x1859ECu, 0x1859F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1859F4u;
label_1859f4:
    // 0x1859f4: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x1859f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x1859f8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1859f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1859fc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1859fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185a00: 0xc0614ca  jal         func_185328
    ctx->pc = 0x185A00u;
    SET_GPR_U32(ctx, 31, 0x185A08u);
    ctx->pc = 0x185A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185A00u;
    // 0x185a04: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185328u, 0x185A00u, 0x185A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185A08u;
label_185a08:
    // 0x185a08: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x185a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x185a0c: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x185a0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x185a10: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x185a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185a14: 0xc061512  jal         func_185448
    ctx->pc = 0x185A14u;
    SET_GPR_U32(ctx, 31, 0x185A1Cu);
    ctx->pc = 0x185A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185A14u;
    // 0x185a18: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185448u, 0x185A14u, 0x185A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185A1Cu;
label_185a1c:
    // 0x185a1c: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x185a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x185a20: 0x4481f000  mtc1        $at, $f30
    ctx->pc = 0x185a20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[30], &bits, sizeof(bits)); }
    // 0x185a24: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x185a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185a28: 0xc061532  jal         func_1854C8
    ctx->pc = 0x185A28u;
    SET_GPR_U32(ctx, 31, 0x185A30u);
    ctx->pc = 0x185A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185A28u;
    // 0x185a2c: 0x2405001b  addiu       $a1, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1854C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1854C8u, 0x185A28u, 0x185A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185A30u;
label_185a30:
    // 0x185a30: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x185a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x185a34: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x185a34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x185a38: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x185a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185a3c: 0xc0615b0  jal         func_1856C0
    ctx->pc = 0x185A3Cu;
    SET_GPR_U32(ctx, 31, 0x185A44u);
    ctx->pc = 0x185A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185A3Cu;
    // 0x185a40: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1856C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1856C0u, 0x185A3Cu, 0x185A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185A44u;
label_185a44:
    // 0x185a44: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x185a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x185a48: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x185a48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x185a4c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x185a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185a50: 0xc06160c  jal         func_185830
    ctx->pc = 0x185A50u;
    SET_GPR_U32(ctx, 31, 0x185A58u);
    ctx->pc = 0x185A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185A50u;
    // 0x185a54: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185830u, 0x185A50u, 0x185A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185A58u;
label_185a58:
    // 0x185a58: 0x3c01420c  lui         $at, 0x420C
    ctx->pc = 0x185a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16908 << 16));
    // 0x185a5c: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x185a5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x185a60: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x185a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185a64: 0xc06074a  jal         func_181D28
    ctx->pc = 0x185A64u;
    SET_GPR_U32(ctx, 31, 0x185A6Cu);
    ctx->pc = 0x185A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185A64u;
    // 0x185a68: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181D28u, 0x185A64u, 0x185A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185A6Cu;
label_185a6c:
    // 0x185a6c: 0x3c014090  lui         $at, 0x4090
    ctx->pc = 0x185a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16528 << 16));
    // 0x185a70: 0x4481e000  mtc1        $at, $f28
    ctx->pc = 0x185a70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
    // 0x185a74: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x185a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185a78: 0xc06074a  jal         func_181D28
    ctx->pc = 0x185A78u;
    SET_GPR_U32(ctx, 31, 0x185A80u);
    ctx->pc = 0x185A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185A78u;
    // 0x185a7c: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181D28u, 0x185A78u, 0x185A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185A80u;
label_185a80:
    // 0x185a80: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x185a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x185a84: 0x4481e800  mtc1        $at, $f29
    ctx->pc = 0x185a84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[29], &bits, sizeof(bits)); }
    // 0x185a88: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x185a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185a8c: 0xc06081a  jal         func_182068
    ctx->pc = 0x185A8Cu;
    SET_GPR_U32(ctx, 31, 0x185A94u);
    ctx->pc = 0x185A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185A8Cu;
    // 0x185a90: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182068u, 0x185A8Cu, 0x185A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185A94u;
label_185a94:
    // 0x185a94: 0x3c014282  lui         $at, 0x4282
    ctx->pc = 0x185a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17026 << 16));
    // 0x185a98: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x185a98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x185a9c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x185a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185aa0: 0xc06081a  jal         func_182068
    ctx->pc = 0x185AA0u;
    SET_GPR_U32(ctx, 31, 0x185AA8u);
    ctx->pc = 0x185AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185AA0u;
    // 0x185aa4: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182068u, 0x185AA0u, 0x185AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185AA8u;
label_185aa8:
    // 0x185aa8: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x185aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x185aac: 0x4481f800  mtc1        $at, $f31
    ctx->pc = 0x185aacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[31], &bits, sizeof(bits)); }
    // 0x185ab0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x185ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185ab4: 0xc060c60  jal         func_183180
    ctx->pc = 0x185AB4u;
    SET_GPR_U32(ctx, 31, 0x185ABCu);
    ctx->pc = 0x185AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185AB4u;
    // 0x185ab8: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183180u, 0x185AB4u, 0x185ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185ABCu;
label_185abc:
    // 0x185abc: 0x3c100049  lui         $s0, 0x49
    ctx->pc = 0x185abcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
    // 0x185ac0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x185ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185ac4: 0x2610dec0  addiu       $s0, $s0, -0x2140
    ctx->pc = 0x185ac4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958784));
    // 0x185ac8: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x185ac8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x185acc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185ad0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x185ad0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x185ad4: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x185ad4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x185ad8: 0x4600f3c6  mov.s       $f15, $f30
    ctx->pc = 0x185ad8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[30]);
    // 0x185adc: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x185adcu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x185ae0: 0xc060450  jal         func_181140
    ctx->pc = 0x185AE0u;
    SET_GPR_U32(ctx, 31, 0x185AE8u);
    ctx->pc = 0x185AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185AE0u;
    // 0x185ae4: 0x4600a446  mov.s       $f17, $f20 (Delay Slot)
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x185AE0u, 0x185AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185AE8u;
label_185ae8:
    // 0x185ae8: 0x2614df00  addiu       $s4, $s0, -0x2100
    ctx->pc = 0x185ae8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958848));
    // 0x185aec: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x185aecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x185af0: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x185af0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x185af4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185af8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x185af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x185afc: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x185afcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x185b00: 0x4600f3c6  mov.s       $f15, $f30
    ctx->pc = 0x185b00u;
    ctx->f[15] = FPU_MOV_S(ctx->f[30]);
    // 0x185b04: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x185b04u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x185b08: 0xc060450  jal         func_181140
    ctx->pc = 0x185B08u;
    SET_GPR_U32(ctx, 31, 0x185B10u);
    ctx->pc = 0x185B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185B08u;
    // 0x185b0c: 0x4600a446  mov.s       $f17, $f20 (Delay Slot)
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x185B08u, 0x185B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185B10u;
label_185b10:
    // 0x185b10: 0x2611fb80  addiu       $s1, $s0, -0x480
    ctx->pc = 0x185b10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966144));
    // 0x185b14: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x185b14u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x185b18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185b1c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x185b1cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x185b20: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x185b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x185b24: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x185b24u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x185b28: 0x4600f3c6  mov.s       $f15, $f30
    ctx->pc = 0x185b28u;
    ctx->f[15] = FPU_MOV_S(ctx->f[30]);
    // 0x185b2c: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x185b2cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x185b30: 0xc060450  jal         func_181140
    ctx->pc = 0x185B30u;
    SET_GPR_U32(ctx, 31, 0x185B38u);
    ctx->pc = 0x185B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185B30u;
    // 0x185b34: 0x4600a446  mov.s       $f17, $f20 (Delay Slot)
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x185B30u, 0x185B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185B38u;
label_185b38:
    // 0x185b38: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x185b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x185b3c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x185b3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x185b40: 0x3c01425c  lui         $at, 0x425C
    ctx->pc = 0x185b40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16988 << 16));
    // 0x185b44: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x185b44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x185b48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185b4c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x185b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x185b50: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x185b50u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x185b54: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x185b54u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
    // 0x185b58: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x185b58u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x185b5c: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x185b5cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x185b60: 0xc060450  jal         func_181140
    ctx->pc = 0x185B60u;
    SET_GPR_U32(ctx, 31, 0x185B68u);
    ctx->pc = 0x185B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185B60u;
    // 0x185b64: 0x4600a446  mov.s       $f17, $f20 (Delay Slot)
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x185B60u, 0x185B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185B68u;
label_185b68:
    // 0x185b68: 0x2613fd00  addiu       $s3, $s0, -0x300
    ctx->pc = 0x185b68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966528));
    // 0x185b6c: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x185b6cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    // 0x185b70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185b74: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x185b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x185b78: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x185b78u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x185b7c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x185b7cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x185b80: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x185b80u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x185b84: 0x4600ac06  mov.s       $f16, $f21
    ctx->pc = 0x185b84u;
    ctx->f[16] = FPU_MOV_S(ctx->f[21]);
    // 0x185b88: 0xc060450  jal         func_181140
    ctx->pc = 0x185B88u;
    SET_GPR_U32(ctx, 31, 0x185B90u);
    ctx->pc = 0x185B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185B88u;
    // 0x185b8c: 0x4600a446  mov.s       $f17, $f20 (Delay Slot)
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x185B88u, 0x185B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185B90u;
label_185b90:
    // 0x185b90: 0x2615fe80  addiu       $s5, $s0, -0x180
    ctx->pc = 0x185b90u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966912));
    // 0x185b94: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x185b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x185b98: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x185b98u;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    // 0x185b9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185ba0: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x185ba0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x185ba4: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x185ba4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x185ba8: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x185ba8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x185bac: 0x4600ac06  mov.s       $f16, $f21
    ctx->pc = 0x185bacu;
    ctx->f[16] = FPU_MOV_S(ctx->f[21]);
    // 0x185bb0: 0xc060450  jal         func_181140
    ctx->pc = 0x185BB0u;
    SET_GPR_U32(ctx, 31, 0x185BB8u);
    ctx->pc = 0x185BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185BB0u;
    // 0x185bb4: 0x4600a446  mov.s       $f17, $f20 (Delay Slot)
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x185BB0u, 0x185BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185BB8u;
label_185bb8:
    // 0x185bb8: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x185bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x185bbc: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x185bbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x185bc0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x185bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x185bc4: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x185bc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x185bc8: 0x4600e346  mov.s       $f13, $f28
    ctx->pc = 0x185bc8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[28]);
    // 0x185bcc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x185bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x185bd0: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x185bd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x185bd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185bd8: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x185bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x185bdc: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x185bdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x185be0: 0x2616fa00  addiu       $s6, $s0, -0x600
    ctx->pc = 0x185be0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965760));
    // 0x185be4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x185be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x185be8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x185be8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x185bec: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x185becu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x185bf0: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x185bf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x185bf4: 0xc0604a6  jal         func_181298
    ctx->pc = 0x185BF4u;
    SET_GPR_U32(ctx, 31, 0x185BFCu);
    ctx->pc = 0x185BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185BF4u;
    // 0x185bf8: 0x2612f580  addiu       $s2, $s0, -0xA80 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181298u, 0x185BF4u, 0x185BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185BFCu;
label_185bfc:
    // 0x185bfc: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x185bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x185c00: 0x26040174  addiu       $a0, $s0, 0x174
    ctx->pc = 0x185c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 372));
    // 0x185c04: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x185C04u;
    SET_GPR_U32(ctx, 31, 0x185C0Cu);
    ctx->pc = 0x185C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185C04u;
    // 0x185c08: 0x24a5f930  addiu       $a1, $a1, -0x6D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x185C04u, 0x185C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185C0Cu;
label_185c0c:
    // 0x185c0c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x185c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185c10: 0xc06081a  jal         func_182068
    ctx->pc = 0x185C10u;
    SET_GPR_U32(ctx, 31, 0x185C18u);
    ctx->pc = 0x185C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185C10u;
    // 0x185c14: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182068u, 0x185C10u, 0x185C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185C18u;
label_185c18:
    // 0x185c18: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x185c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185c1c: 0xc06081a  jal         func_182068
    ctx->pc = 0x185C1Cu;
    SET_GPR_U32(ctx, 31, 0x185C24u);
    ctx->pc = 0x185C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185C1Cu;
    // 0x185c20: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182068u, 0x185C1Cu, 0x185C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185C24u;
label_185c24:
    // 0x185c24: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x185c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185c28: 0xc060688  jal         func_181A20
    ctx->pc = 0x185C28u;
    SET_GPR_U32(ctx, 31, 0x185C30u);
    ctx->pc = 0x185C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185C28u;
    // 0x185c2c: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181A20u, 0x185C28u, 0x185C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185C30u;
label_185c30:
    // 0x185c30: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x185c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x185c34: 0xc061532  jal         func_1854C8
    ctx->pc = 0x185C34u;
    SET_GPR_U32(ctx, 31, 0x185C3Cu);
    ctx->pc = 0x185C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185C34u;
    // 0x185c38: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1854C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1854C8u, 0x185C34u, 0x185C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185C3Cu;
label_185c3c:
    // 0x185c3c: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x185c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x185c40: 0x2604fcf4  addiu       $a0, $s0, -0x30C
    ctx->pc = 0x185c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966516));
    // 0x185c44: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x185C44u;
    SET_GPR_U32(ctx, 31, 0x185C4Cu);
    ctx->pc = 0x185C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185C44u;
    // 0x185c48: 0x24a5f940  addiu       $a1, $a1, -0x6C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x185C44u, 0x185C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185C4Cu;
label_185c4c:
    // 0x185c4c: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x185c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x185c50: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x185c50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x185c54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185c58: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x185c58u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x185c5c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x185c5cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x185c60: 0x4600cbc6  mov.s       $f15, $f25
    ctx->pc = 0x185c60u;
    ctx->f[15] = FPU_MOV_S(ctx->f[25]);
    // 0x185c64: 0xe69d1da8  swc1        $f29, 0x1DA8($s4)
    ctx->pc = 0x185c64u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 7592), bits); }
    // 0x185c68: 0xc060498  jal         func_181260
    ctx->pc = 0x185C68u;
    SET_GPR_U32(ctx, 31, 0x185C70u);
    ctx->pc = 0x185C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185C68u;
    // 0x185c6c: 0xe69b1dac  swc1        $f27, 0x1DAC($s4) (Delay Slot)
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 7596), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x181260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181260u, 0x185C68u, 0x185C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185C70u;
label_185c70:
    // 0x185c70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185c74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x185c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185c78: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x185c78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x185c7c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x185c7cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x185c80: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x185c80u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x185c84: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x185c84u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x185c88: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x185c88u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x185c8c: 0xc060450  jal         func_181140
    ctx->pc = 0x185C8Cu;
    SET_GPR_U32(ctx, 31, 0x185C94u);
    ctx->pc = 0x185C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185C8Cu;
    // 0x185c90: 0x4600a446  mov.s       $f17, $f20 (Delay Slot)
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x185C8Cu, 0x185C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185C94u;
label_185c94:
    // 0x185c94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185c98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x185c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x185c9c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x185c9cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x185ca0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x185ca0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x185ca4: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x185ca4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x185ca8: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x185ca8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x185cac: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x185cacu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x185cb0: 0xc060450  jal         func_181140
    ctx->pc = 0x185CB0u;
    SET_GPR_U32(ctx, 31, 0x185CB8u);
    ctx->pc = 0x185CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185CB0u;
    // 0x185cb4: 0x4600a446  mov.s       $f17, $f20 (Delay Slot)
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x185CB0u, 0x185CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185CB8u;
label_185cb8:
    // 0x185cb8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x185cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x185cbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185cc0: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x185cc0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x185cc4: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x185cc4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x185cc8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x185cc8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x185ccc: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x185cccu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x185cd0: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x185cd0u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x185cd4: 0xc060450  jal         func_181140
    ctx->pc = 0x185CD4u;
    SET_GPR_U32(ctx, 31, 0x185CDCu);
    ctx->pc = 0x185CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185CD4u;
    // 0x185cd8: 0x4600a446  mov.s       $f17, $f20 (Delay Slot)
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x185CD4u, 0x185CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185CDCu;
label_185cdc:
    // 0x185cdc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x185cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x185ce0: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x185ce0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x185ce4: 0x4600fc06  mov.s       $f16, $f31
    ctx->pc = 0x185ce4u;
    ctx->f[16] = FPU_MOV_S(ctx->f[31]);
    // 0x185ce8: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x185ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x185cec: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x185cecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x185cf0: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x185cf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x185cf4: 0x4600e346  mov.s       $f13, $f28
    ctx->pc = 0x185cf4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[28]);
    // 0x185cf8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x185cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x185cfc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x185cfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x185d00: 0x4600e3c6  mov.s       $f15, $f28
    ctx->pc = 0x185d00u;
    ctx->f[15] = FPU_MOV_S(ctx->f[28]);
    // 0x185d04: 0xc0604a6  jal         func_181298
    ctx->pc = 0x185D04u;
    SET_GPR_U32(ctx, 31, 0x185D0Cu);
    ctx->pc = 0x185D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185D04u;
    // 0x185d08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181298u, 0x185D04u, 0x185D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185D0Cu;
label_185d0c:
    // 0x185d0c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x185d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x185d10: 0xc061532  jal         func_1854C8
    ctx->pc = 0x185D10u;
    SET_GPR_U32(ctx, 31, 0x185D18u);
    ctx->pc = 0x185D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185D10u;
    // 0x185d14: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1854C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1854C8u, 0x185D10u, 0x185D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185D18u;
label_185d18:
    // 0x185d18: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x185d18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x185d1c: 0x2604fe74  addiu       $a0, $s0, -0x18C
    ctx->pc = 0x185d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966900));
    // 0x185d20: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x185D20u;
    SET_GPR_U32(ctx, 31, 0x185D28u);
    ctx->pc = 0x185D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185D20u;
    // 0x185d24: 0x24a5f950  addiu       $a1, $a1, -0x6B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x185D20u, 0x185D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185D28u;
label_185d28:
    // 0x185d28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x185d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185d2c: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x185d2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    // 0x185d30: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x185d30u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x185d34: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x185d34u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x185d38: 0x4600d3c6  mov.s       $f15, $f26
    ctx->pc = 0x185d38u;
    ctx->f[15] = FPU_MOV_S(ctx->f[26]);
    // 0x185d3c: 0xe69d1f28  swc1        $f29, 0x1F28($s4)
    ctx->pc = 0x185d3cu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 7976), bits); }
    // 0x185d40: 0xc060498  jal         func_181260
    ctx->pc = 0x185D40u;
    SET_GPR_U32(ctx, 31, 0x185D48u);
    ctx->pc = 0x185D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185D40u;
    // 0x185d44: 0xe69b1f2c  swc1        $f27, 0x1F2C($s4) (Delay Slot)
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 7980), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x181260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181260u, 0x185D40u, 0x185D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185D48u;
label_185d48:
    // 0x185d48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x185d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185d4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x185d4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185d50: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x185d50u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x185d54: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x185d54u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x185d58: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x185d58u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x185d5c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x185d5cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x185d60: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x185d60u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x185d64: 0xc060450  jal         func_181140
    ctx->pc = 0x185D64u;
    SET_GPR_U32(ctx, 31, 0x185D6Cu);
    ctx->pc = 0x185D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185D64u;
    // 0x185d68: 0x4600a446  mov.s       $f17, $f20 (Delay Slot)
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x185D64u, 0x185D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185D6Cu;
label_185d6c:
    // 0x185d6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x185d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185d70: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x185d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x185d74: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x185d74u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x185d78: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x185d78u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x185d7c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x185d7cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x185d80: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x185d80u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x185d84: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x185d84u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x185d88: 0xc060450  jal         func_181140
    ctx->pc = 0x185D88u;
    SET_GPR_U32(ctx, 31, 0x185D90u);
    ctx->pc = 0x185D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185D88u;
    // 0x185d8c: 0x4600a446  mov.s       $f17, $f20 (Delay Slot)
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x185D88u, 0x185D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185D90u;
label_185d90:
    // 0x185d90: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x185d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x185d94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x185d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185d98: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x185d98u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x185d9c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x185d9cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x185da0: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x185da0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x185da4: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x185da4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x185da8: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x185da8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x185dac: 0xc060450  jal         func_181140
    ctx->pc = 0x185DACu;
    SET_GPR_U32(ctx, 31, 0x185DB4u);
    ctx->pc = 0x185DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185DACu;
    // 0x185db0: 0x4600a446  mov.s       $f17, $f20 (Delay Slot)
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x185DACu, 0x185DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185DB4u;
label_185db4:
    // 0x185db4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x185db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x185db8: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x185db8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x185dbc: 0x4600fc06  mov.s       $f16, $f31
    ctx->pc = 0x185dbcu;
    ctx->f[16] = FPU_MOV_S(ctx->f[31]);
    // 0x185dc0: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x185dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
    // 0x185dc4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x185dc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x185dc8: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x185dc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x185dcc: 0x4600e346  mov.s       $f13, $f28
    ctx->pc = 0x185dccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[28]);
    // 0x185dd0: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x185dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
    // 0x185dd4: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x185dd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x185dd8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x185dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x185ddc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x185ddcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x185de0: 0xc0604a6  jal         func_181298
    ctx->pc = 0x185DE0u;
    SET_GPR_U32(ctx, 31, 0x185DE8u);
    ctx->pc = 0x185DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185DE0u;
    // 0x185de4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181298u, 0x185DE0u, 0x185DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185DE8u;
label_185de8:
    // 0x185de8: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x185de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x185dec: 0xc061532  jal         func_1854C8
    ctx->pc = 0x185DECu;
    SET_GPR_U32(ctx, 31, 0x185DF4u);
    ctx->pc = 0x185DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185DECu;
    // 0x185df0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1854C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1854C8u, 0x185DECu, 0x185DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185DF4u;
label_185df4:
    // 0x185df4: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x185df4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x185df8: 0x2604fff4  addiu       $a0, $s0, -0xC
    ctx->pc = 0x185df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
    // 0x185dfc: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x185DFCu;
    SET_GPR_U32(ctx, 31, 0x185E04u);
    ctx->pc = 0x185E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185DFCu;
    // 0x185e00: 0x24a5f968  addiu       $a1, $a1, -0x698 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x185DFCu, 0x185E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185E04u;
label_185e04:
    // 0x185e04: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x185e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185e08: 0x4600f306  mov.s       $f12, $f30
    ctx->pc = 0x185e08u;
    ctx->f[12] = FPU_MOV_S(ctx->f[30]);
    // 0x185e0c: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x185e0cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x185e10: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x185e10u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x185e14: 0x4600cbc6  mov.s       $f15, $f25
    ctx->pc = 0x185e14u;
    ctx->f[15] = FPU_MOV_S(ctx->f[25]);
    // 0x185e18: 0xe69b20ac  swc1        $f27, 0x20AC($s4)
    ctx->pc = 0x185e18u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8364), bits); }
    // 0x185e1c: 0xc060498  jal         func_181260
    ctx->pc = 0x185E1Cu;
    SET_GPR_U32(ctx, 31, 0x185E24u);
    ctx->pc = 0x185E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185E1Cu;
    // 0x185e20: 0xe69d20a8  swc1        $f29, 0x20A8($s4) (Delay Slot)
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8360), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x181260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181260u, 0x185E1Cu, 0x185E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185E24u;
label_185e24:
    // 0x185e24: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x185e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185e28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x185e28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185e2c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x185e2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x185e30: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x185e30u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x185e34: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x185e34u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x185e38: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x185e38u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x185e3c: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x185e3cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x185e40: 0xc060450  jal         func_181140
    ctx->pc = 0x185E40u;
    SET_GPR_U32(ctx, 31, 0x185E48u);
    ctx->pc = 0x185E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185E40u;
    // 0x185e44: 0x4600a446  mov.s       $f17, $f20 (Delay Slot)
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x185E40u, 0x185E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185E48u;
label_185e48:
    // 0x185e48: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x185e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185e4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x185e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x185e50: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x185e50u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x185e54: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x185e54u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x185e58: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x185e58u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x185e5c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x185e5cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x185e60: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x185e60u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x185e64: 0xc060450  jal         func_181140
    ctx->pc = 0x185E64u;
    SET_GPR_U32(ctx, 31, 0x185E6Cu);
    ctx->pc = 0x185E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185E64u;
    // 0x185e68: 0x4600a446  mov.s       $f17, $f20 (Delay Slot)
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x185E64u, 0x185E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185E6Cu;
label_185e6c:
    // 0x185e6c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x185e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x185e70: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x185e70u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x185e74: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x185e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185e78: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x185e78u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x185e7c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x185e7cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x185e80: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x185e80u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x185e84: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x185e84u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x185e88: 0xc060450  jal         func_181140
    ctx->pc = 0x185E88u;
    SET_GPR_U32(ctx, 31, 0x185E90u);
    ctx->pc = 0x185E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185E88u;
    // 0x185e8c: 0x4600a446  mov.s       $f17, $f20 (Delay Slot)
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x185E88u, 0x185E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185E90u;
label_185e90:
    // 0x185e90: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x185e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x185e94: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x185e94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x185e98: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x185e98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x185e9c: 0x4600e346  mov.s       $f13, $f28
    ctx->pc = 0x185e9cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[28]);
    // 0x185ea0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x185ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x185ea4: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x185ea4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x185ea8: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x185ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x185eac: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x185eacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x185eb0: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x185eb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x185eb4: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x185eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x185eb8: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x185eb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x185ebc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x185ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x185ec0: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x185ec0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x185ec4: 0xc0604a6  jal         func_181298
    ctx->pc = 0x185EC4u;
    SET_GPR_U32(ctx, 31, 0x185ECCu);
    ctx->pc = 0x185EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185EC4u;
    // 0x185ec8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181298u, 0x185EC4u, 0x185ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185ECCu;
label_185ecc:
    // 0x185ecc: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x185eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x185ed0: 0xc06081a  jal         func_182068
    ctx->pc = 0x185ED0u;
    SET_GPR_U32(ctx, 31, 0x185ED8u);
    ctx->pc = 0x185ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185ED0u;
    // 0x185ed4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182068u, 0x185ED0u, 0x185ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185ED8u;
label_185ed8:
    // 0x185ed8: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x185ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x185edc: 0x2604fb74  addiu       $a0, $s0, -0x48C
    ctx->pc = 0x185edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966132));
    // 0x185ee0: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x185EE0u;
    SET_GPR_U32(ctx, 31, 0x185EE8u);
    ctx->pc = 0x185EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185EE0u;
    // 0x185ee4: 0x24a5f978  addiu       $a1, $a1, -0x688 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x185EE0u, 0x185EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185EE8u;
label_185ee8:
    // 0x185ee8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x185ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185eec: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x185eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x185ef0: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x185ef0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x185ef4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x185ef4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x185ef8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x185ef8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x185efc: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x185efcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x185f00: 0x4600ec06  mov.s       $f16, $f29
    ctx->pc = 0x185f00u;
    ctx->f[16] = FPU_MOV_S(ctx->f[29]);
    // 0x185f04: 0xc060450  jal         func_181140
    ctx->pc = 0x185F04u;
    SET_GPR_U32(ctx, 31, 0x185F0Cu);
    ctx->pc = 0x185F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185F04u;
    // 0x185f08: 0x4600a446  mov.s       $f17, $f20 (Delay Slot)
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x185F04u, 0x185F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185F0Cu;
label_185f0c:
    // 0x185f0c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x185f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185f10: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x185f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x185f14: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x185f14u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x185f18: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x185f18u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x185f1c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x185f1cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x185f20: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x185f20u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x185f24: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x185f24u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x185f28: 0xc060450  jal         func_181140
    ctx->pc = 0x185F28u;
    SET_GPR_U32(ctx, 31, 0x185F30u);
    ctx->pc = 0x185F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185F28u;
    // 0x185f2c: 0x4600a446  mov.s       $f17, $f20 (Delay Slot)
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x185F28u, 0x185F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185F30u;
label_185f30:
    // 0x185f30: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x185f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185f34: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x185f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x185f38: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x185f38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x185f3c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x185f3cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x185f40: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x185f40u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x185f44: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x185f44u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x185f48: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x185f48u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x185f4c: 0xc060450  jal         func_181140
    ctx->pc = 0x185F4Cu;
    SET_GPR_U32(ctx, 31, 0x185F54u);
    ctx->pc = 0x185F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185F4Cu;
    // 0x185f50: 0x4600a446  mov.s       $f17, $f20 (Delay Slot)
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x185F4Cu, 0x185F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185F54u;
label_185f54:
    // 0x185f54: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x185f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x185f58: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x185f58u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x185f5c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x185f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185f60: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x185f60u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x185f64: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x185f64u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x185f68: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x185f68u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x185f6c: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x185f6cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
    // 0x185f70: 0xc060450  jal         func_181140
    ctx->pc = 0x185F70u;
    SET_GPR_U32(ctx, 31, 0x185F78u);
    ctx->pc = 0x185F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185F70u;
    // 0x185f74: 0x4600a406  mov.s       $f16, $f20 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x185F70u, 0x185F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185F78u;
label_185f78:
    // 0x185f78: 0x4600eb06  mov.s       $f12, $f29
    ctx->pc = 0x185f78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[29]);
    // 0x185f7c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x185f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185f80: 0x4600d346  mov.s       $f13, $f26
    ctx->pc = 0x185f80u;
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
    // 0x185f84: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x185f84u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x185f88: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x185f88u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x185f8c: 0xc06049e  jal         func_181278
    ctx->pc = 0x185F8Cu;
    SET_GPR_U32(ctx, 31, 0x185F94u);
    ctx->pc = 0x185F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185F8Cu;
    // 0x185f90: 0x4600a406  mov.s       $f16, $f20 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181278u, 0x185F8Cu, 0x185F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185F94u;
label_185f94:
    // 0x185f94: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x185f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x185f98: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x185f98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x185f9c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x185f9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x185fa0: 0x4600e346  mov.s       $f13, $f28
    ctx->pc = 0x185fa0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[28]);
    // 0x185fa4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x185fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x185fa8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x185fa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x185fac: 0x3c014101  lui         $at, 0x4101
    ctx->pc = 0x185facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16641 << 16));
    // 0x185fb0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x185fb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x185fb4: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x185fb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x185fb8: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x185fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x185fbc: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x185fbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x185fc0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x185fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x185fc4: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x185fc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x185fc8: 0xc0604a6  jal         func_181298
    ctx->pc = 0x185FC8u;
    SET_GPR_U32(ctx, 31, 0x185FD0u);
    ctx->pc = 0x185FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185FC8u;
    // 0x185fcc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181298u, 0x185FC8u, 0x185FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185FD0u;
label_185fd0:
    // 0x185fd0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x185fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x185fd4: 0xc06074a  jal         func_181D28
    ctx->pc = 0x185FD4u;
    SET_GPR_U32(ctx, 31, 0x185FDCu);
    ctx->pc = 0x185FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185FD4u;
    // 0x185fd8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181D28u, 0x185FD4u, 0x185FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185FDCu;
label_185fdc:
    // 0x185fdc: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x185fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x185fe0: 0x2604f6f4  addiu       $a0, $s0, -0x90C
    ctx->pc = 0x185fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964980));
    // 0x185fe4: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x185FE4u;
    SET_GPR_U32(ctx, 31, 0x185FECu);
    ctx->pc = 0x185FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185FE4u;
    // 0x185fe8: 0x24a5f990  addiu       $a1, $a1, -0x670 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x185FE4u, 0x185FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185FECu;
label_185fec:
    // 0x185fec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x185fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185ff0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x185ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185ff4: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x185ff4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x185ff8: 0x4600d346  mov.s       $f13, $f26
    ctx->pc = 0x185ff8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
    // 0x185ffc: 0x4600f386  mov.s       $f14, $f30
    ctx->pc = 0x185ffcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[30]);
    // 0x186000: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x186000u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x186004: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x186004u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x186008: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x186008u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x18600c: 0xe69417ac  swc1        $f20, 0x17AC($s4)
    ctx->pc = 0x18600cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 6060), bits); }
    // 0x186010: 0xc060450  jal         func_181140
    ctx->pc = 0x186010u;
    SET_GPR_U32(ctx, 31, 0x186018u);
    ctx->pc = 0x186014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186010u;
    // 0x186014: 0xe69417a8  swc1        $f20, 0x17A8($s4) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 6056), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x186010u, 0x186018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186018u;
label_186018:
    // 0x186018: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x186018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18601c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18601cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x186020: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x186020u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x186024: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x186024u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x186028: 0x4600cb86  mov.s       $f14, $f25
    ctx->pc = 0x186028u;
    ctx->f[14] = FPU_MOV_S(ctx->f[25]);
    // 0x18602c: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x18602cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
    // 0x186030: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x186030u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x186034: 0xc060450  jal         func_181140
    ctx->pc = 0x186034u;
    SET_GPR_U32(ctx, 31, 0x18603Cu);
    ctx->pc = 0x186038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186034u;
    // 0x186038: 0x4600a446  mov.s       $f17, $f20 (Delay Slot)
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x186034u, 0x18603Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18603Cu;
label_18603c:
    // 0x18603c: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x18603cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x186040: 0x4600f3c6  mov.s       $f15, $f30
    ctx->pc = 0x186040u;
    ctx->f[15] = FPU_MOV_S(ctx->f[30]);
    // 0x186044: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x186044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186048: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x186048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18604c: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x18604cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x186050: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x186050u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x186054: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x186054u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x186058: 0xc060450  jal         func_181140
    ctx->pc = 0x186058u;
    SET_GPR_U32(ctx, 31, 0x186060u);
    ctx->pc = 0x18605Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186058u;
    // 0x18605c: 0x4600a446  mov.s       $f17, $f20 (Delay Slot)
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x186058u, 0x186060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186060u;
label_186060:
    // 0x186060: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x186060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x186064: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x186064u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x186068: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x186068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18606c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x18606cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x186070: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x186070u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x186074: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x186074u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x186078: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x186078u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x18607c: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x18607cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x186080: 0xc060450  jal         func_181140
    ctx->pc = 0x186080u;
    SET_GPR_U32(ctx, 31, 0x186088u);
    ctx->pc = 0x186084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186080u;
    // 0x186084: 0x4600a446  mov.s       $f17, $f20 (Delay Slot)
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x186080u, 0x186088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186088u;
label_186088:
    // 0x186088: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x186088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18608c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x18608cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x186090: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x186090u;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    // 0x186094: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x186094u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x186098: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x186098u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x18609c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x18609cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1860a0: 0x4600b406  mov.s       $f16, $f22
    ctx->pc = 0x1860a0u;
    ctx->f[16] = FPU_MOV_S(ctx->f[22]);
    // 0x1860a4: 0xc060450  jal         func_181140
    ctx->pc = 0x1860A4u;
    SET_GPR_U32(ctx, 31, 0x1860ACu);
    ctx->pc = 0x1860A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1860A4u;
    // 0x1860a8: 0x4600a446  mov.s       $f17, $f20 (Delay Slot)
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1860A4u, 0x1860ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1860ACu;
label_1860ac:
    // 0x1860ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1860acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1860b0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1860b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1860b4: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x1860b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x1860b8: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x1860b8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    // 0x1860bc: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1860bcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1860c0: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1860c0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1860c4: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x1860c4u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x1860c8: 0xc060450  jal         func_181140
    ctx->pc = 0x1860C8u;
    SET_GPR_U32(ctx, 31, 0x1860D0u);
    ctx->pc = 0x1860CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1860C8u;
    // 0x1860cc: 0x4600a446  mov.s       $f17, $f20 (Delay Slot)
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1860C8u, 0x1860D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1860D0u;
label_1860d0:
    // 0x1860d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1860d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1860d4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1860d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1860d8: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x1860d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x1860dc: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x1860dcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    // 0x1860e0: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1860e0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1860e4: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1860e4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1860e8: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x1860e8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x1860ec: 0xc060450  jal         func_181140
    ctx->pc = 0x1860ECu;
    SET_GPR_U32(ctx, 31, 0x1860F4u);
    ctx->pc = 0x1860F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1860ECu;
    // 0x1860f0: 0x4600a446  mov.s       $f17, $f20 (Delay Slot)
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1860ECu, 0x1860F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1860F4u;
label_1860f4:
    // 0x1860f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1860f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1860f8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1860f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1860fc: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x1860fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    // 0x186100: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x186100u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x186104: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x186104u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x186108: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x186108u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x18610c: 0x4600b406  mov.s       $f16, $f22
    ctx->pc = 0x18610cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[22]);
    // 0x186110: 0xc060450  jal         func_181140
    ctx->pc = 0x186110u;
    SET_GPR_U32(ctx, 31, 0x186118u);
    ctx->pc = 0x186114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186110u;
    // 0x186114: 0x4600a446  mov.s       $f17, $f20 (Delay Slot)
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x186110u, 0x186118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186118u;
label_186118:
    // 0x186118: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x186118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18611c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x18611cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x186120: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x186120u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x186124: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x186124u;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    // 0x186128: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x186128u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x18612c: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x18612cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
    // 0x186130: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x186130u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x186134: 0xc060450  jal         func_181140
    ctx->pc = 0x186134u;
    SET_GPR_U32(ctx, 31, 0x18613Cu);
    ctx->pc = 0x186138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186134u;
    // 0x186138: 0x4600a446  mov.s       $f17, $f20 (Delay Slot)
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x186134u, 0x18613Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18613Cu;
label_18613c:
    // 0x18613c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18613cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186140: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x186140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x186144: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x186144u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x186148: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x186148u;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    // 0x18614c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x18614cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x186150: 0x4600cbc6  mov.s       $f15, $f25
    ctx->pc = 0x186150u;
    ctx->f[15] = FPU_MOV_S(ctx->f[25]);
    // 0x186154: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x186154u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x186158: 0xc060450  jal         func_181140
    ctx->pc = 0x186158u;
    SET_GPR_U32(ctx, 31, 0x186160u);
    ctx->pc = 0x18615Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186158u;
    // 0x18615c: 0x4600a446  mov.s       $f17, $f20 (Delay Slot)
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x186158u, 0x186160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186160u;
label_186160:
    // 0x186160: 0x3c01428c  lui         $at, 0x428C
    ctx->pc = 0x186160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17036 << 16));
    // 0x186164: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x186164u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x186168: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x186168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18616c: 0x4600d3c6  mov.s       $f15, $f26
    ctx->pc = 0x18616cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[26]);
    // 0x186170: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x186170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x186174: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x186174u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x186178: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x186178u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x18617c: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x18617cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x186180: 0xc060450  jal         func_181140
    ctx->pc = 0x186180u;
    SET_GPR_U32(ctx, 31, 0x186188u);
    ctx->pc = 0x186184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186180u;
    // 0x186184: 0x4600a446  mov.s       $f17, $f20 (Delay Slot)
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x186180u, 0x186188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186188u;
label_186188:
    // 0x186188: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x186188u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x18618c: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x18618cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x186190: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x186190u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x186194: 0x46007406  mov.s       $f16, $f14
    ctx->pc = 0x186194u;
    ctx->f[16] = FPU_MOV_S(ctx->f[14]);
    // 0x186198: 0x46007446  mov.s       $f17, $f14
    ctx->pc = 0x186198u;
    ctx->f[17] = FPU_MOV_S(ctx->f[14]);
    // 0x18619c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18619cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1861a0: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1861a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1861a4: 0xc060450  jal         func_181140
    ctx->pc = 0x1861A4u;
    SET_GPR_U32(ctx, 31, 0x1861ACu);
    ctx->pc = 0x1861A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1861A4u;
    // 0x1861a8: 0x4600cb46  mov.s       $f13, $f25 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1861A4u, 0x1861ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1861ACu;
label_1861ac:
    // 0x1861ac: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x1861acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x1861b0: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x1861b0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
    // 0x1861b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1861b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1861b8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1861b8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1861bc: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1861bcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1861c0: 0xc06049e  jal         func_181278
    ctx->pc = 0x1861C0u;
    SET_GPR_U32(ctx, 31, 0x1861C8u);
    ctx->pc = 0x1861C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1861C0u;
    // 0x1861c4: 0x46007c06  mov.s       $f16, $f15 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181278u, 0x1861C0u, 0x1861C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1861C8u;
label_1861c8:
    // 0x1861c8: 0xc0a21a2  jal         func_288688
    ctx->pc = 0x1861C8u;
    SET_GPR_U32(ctx, 31, 0x1861D0u);
    ctx->pc = 0x288688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288688u, 0x1861C8u, 0x1861D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1861D0u;
label_1861d0:
    // 0x1861d0: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1861D0u;
    {
        const bool branch_taken_0x1861d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1861D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1861D0u;
        // 0x1861d4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1861d0) {
            ctx->pc = 0x18626Cu;
            goto label_18626c;
        }
    }
    ctx->pc = 0x1861D8u;
    // 0x1861d8: 0xc06099c  jal         func_182670
    ctx->pc = 0x1861D8u;
    SET_GPR_U32(ctx, 31, 0x1861E0u);
    ctx->pc = 0x1861DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1861D8u;
    // 0x1861dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182670u, 0x1861D8u, 0x1861E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1861E0u;
label_1861e0:
    // 0x1861e0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1861e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1861e4: 0xc06099c  jal         func_182670
    ctx->pc = 0x1861E4u;
    SET_GPR_U32(ctx, 31, 0x1861ECu);
    ctx->pc = 0x1861E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1861E4u;
    // 0x1861e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182670u, 0x1861E4u, 0x1861ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1861ECu;
label_1861ec:
    // 0x1861ec: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1861ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1861f0: 0xc06099c  jal         func_182670
    ctx->pc = 0x1861F0u;
    SET_GPR_U32(ctx, 31, 0x1861F8u);
    ctx->pc = 0x1861F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1861F0u;
    // 0x1861f4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182670u, 0x1861F0u, 0x1861F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1861F8u;
label_1861f8:
    // 0x1861f8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1861f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1861fc: 0xc060a8c  jal         func_182A30
    ctx->pc = 0x1861FCu;
    SET_GPR_U32(ctx, 31, 0x186204u);
    ctx->pc = 0x186200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1861FCu;
    // 0x186200: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182A30u, 0x1861FCu, 0x186204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186204u;
label_186204:
    // 0x186204: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x186204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186208: 0xc060a8c  jal         func_182A30
    ctx->pc = 0x186208u;
    SET_GPR_U32(ctx, 31, 0x186210u);
    ctx->pc = 0x18620Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186208u;
    // 0x18620c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182A30u, 0x186208u, 0x186210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186210u;
label_186210:
    // 0x186210: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x186210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186214: 0xc060a8c  jal         func_182A30
    ctx->pc = 0x186214u;
    SET_GPR_U32(ctx, 31, 0x18621Cu);
    ctx->pc = 0x186218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186214u;
    // 0x186218: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182A30u, 0x186214u, 0x18621Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18621Cu;
label_18621c:
    // 0x18621c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x18621cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186220: 0xc060c60  jal         func_183180
    ctx->pc = 0x186220u;
    SET_GPR_U32(ctx, 31, 0x186228u);
    ctx->pc = 0x186224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186220u;
    // 0x186224: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183180u, 0x186220u, 0x186228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186228u;
label_186228:
    // 0x186228: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x186228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18622c: 0xc060c60  jal         func_183180
    ctx->pc = 0x18622Cu;
    SET_GPR_U32(ctx, 31, 0x186234u);
    ctx->pc = 0x186230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18622Cu;
    // 0x186230: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183180u, 0x18622Cu, 0x186234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186234u;
label_186234:
    // 0x186234: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x186234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186238: 0xc060c60  jal         func_183180
    ctx->pc = 0x186238u;
    SET_GPR_U32(ctx, 31, 0x186240u);
    ctx->pc = 0x18623Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186238u;
    // 0x18623c: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183180u, 0x186238u, 0x186240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186240u;
label_186240:
    // 0x186240: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x186240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186244: 0xc060b76  jal         func_182DD8
    ctx->pc = 0x186244u;
    SET_GPR_U32(ctx, 31, 0x18624Cu);
    ctx->pc = 0x186248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186244u;
    // 0x186248: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DD8u, 0x186244u, 0x18624Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18624Cu;
label_18624c:
    // 0x18624c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x18624cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186250: 0xc060d4c  jal         func_183530
    ctx->pc = 0x186250u;
    SET_GPR_U32(ctx, 31, 0x186258u);
    ctx->pc = 0x186254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186250u;
    // 0x186254: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183530u, 0x186250u, 0x186258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186258u;
label_186258:
    // 0x186258: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x186258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18625c: 0xc060e36  jal         func_1838D8
    ctx->pc = 0x18625Cu;
    SET_GPR_U32(ctx, 31, 0x186264u);
    ctx->pc = 0x186260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18625Cu;
    // 0x186260: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1838D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1838D8u, 0x18625Cu, 0x186264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186264u;
label_186264:
    // 0x186264: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x186264u;
    {
        const bool branch_taken_0x186264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186264u;
        // 0x186268: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186264) {
            ctx->pc = 0x1862FCu;
            goto label_1862fc;
        }
    }
    ctx->pc = 0x18626Cu;
label_18626c:
    // 0x18626c: 0xc060f18  jal         func_183C60
    ctx->pc = 0x18626Cu;
    SET_GPR_U32(ctx, 31, 0x186274u);
    ctx->pc = 0x186270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18626Cu;
    // 0x186270: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183C60u, 0x18626Cu, 0x186274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186274u;
label_186274:
    // 0x186274: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x186274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186278: 0xc060f18  jal         func_183C60
    ctx->pc = 0x186278u;
    SET_GPR_U32(ctx, 31, 0x186280u);
    ctx->pc = 0x18627Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186278u;
    // 0x18627c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183C60u, 0x186278u, 0x186280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186280u;
label_186280:
    // 0x186280: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x186280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186284: 0xc060f18  jal         func_183C60
    ctx->pc = 0x186284u;
    SET_GPR_U32(ctx, 31, 0x18628Cu);
    ctx->pc = 0x186288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186284u;
    // 0x186288: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183C60u, 0x186284u, 0x18628Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18628Cu;
label_18628c:
    // 0x18628c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x18628cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186290: 0xc061002  jal         func_184008
    ctx->pc = 0x186290u;
    SET_GPR_U32(ctx, 31, 0x186298u);
    ctx->pc = 0x186294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186290u;
    // 0x186294: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184008u, 0x186290u, 0x186298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186298u;
label_186298:
    // 0x186298: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x186298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18629c: 0xc061002  jal         func_184008
    ctx->pc = 0x18629Cu;
    SET_GPR_U32(ctx, 31, 0x1862A4u);
    ctx->pc = 0x1862A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18629Cu;
    // 0x1862a0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184008u, 0x18629Cu, 0x1862A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1862A4u;
label_1862a4:
    // 0x1862a4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1862a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1862a8: 0xc061002  jal         func_184008
    ctx->pc = 0x1862A8u;
    SET_GPR_U32(ctx, 31, 0x1862B0u);
    ctx->pc = 0x1862ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1862A8u;
    // 0x1862ac: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184008u, 0x1862A8u, 0x1862B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1862B0u;
label_1862b0:
    // 0x1862b0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1862b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1862b4: 0xc0610ee  jal         func_1843B8
    ctx->pc = 0x1862B4u;
    SET_GPR_U32(ctx, 31, 0x1862BCu);
    ctx->pc = 0x1862B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1862B4u;
    // 0x1862b8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1843B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1843B8u, 0x1862B4u, 0x1862BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1862BCu;
label_1862bc:
    // 0x1862bc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1862bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1862c0: 0xc0610ee  jal         func_1843B8
    ctx->pc = 0x1862C0u;
    SET_GPR_U32(ctx, 31, 0x1862C8u);
    ctx->pc = 0x1862C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1862C0u;
    // 0x1862c4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1843B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1843B8u, 0x1862C0u, 0x1862C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1862C8u;
label_1862c8:
    // 0x1862c8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1862c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1862cc: 0xc0610ee  jal         func_1843B8
    ctx->pc = 0x1862CCu;
    SET_GPR_U32(ctx, 31, 0x1862D4u);
    ctx->pc = 0x1862D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1862CCu;
    // 0x1862d0: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1843B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1843B8u, 0x1862CCu, 0x1862D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1862D4u;
label_1862d4:
    // 0x1862d4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1862d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1862d8: 0xc0611d6  jal         func_184758
    ctx->pc = 0x1862D8u;
    SET_GPR_U32(ctx, 31, 0x1862E0u);
    ctx->pc = 0x1862DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1862D8u;
    // 0x1862dc: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184758u, 0x1862D8u, 0x1862E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1862E0u;
label_1862e0:
    // 0x1862e0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1862e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1862e4: 0xc0612c2  jal         func_184B08
    ctx->pc = 0x1862E4u;
    SET_GPR_U32(ctx, 31, 0x1862ECu);
    ctx->pc = 0x1862E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1862E4u;
    // 0x1862e8: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184B08u, 0x1862E4u, 0x1862ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1862ECu;
label_1862ec:
    // 0x1862ec: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1862ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1862f0: 0xc0613ac  jal         func_184EB0
    ctx->pc = 0x1862F0u;
    SET_GPR_U32(ctx, 31, 0x1862F8u);
    ctx->pc = 0x1862F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1862F0u;
    // 0x1862f4: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184EB0u, 0x1862F0u, 0x1862F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1862F8u;
label_1862f8:
    // 0x1862f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1862f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1862fc:
    // 0x1862fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1862fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x186300: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x186300u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186304: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x186304u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x186308: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x186308u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18630c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x18630cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x186310: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x186310u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x186314: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x186314u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x186318: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x186318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18631c: 0xc7bf00a8  lwc1        $f31, 0xA8($sp)
    ctx->pc = 0x18631cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x186320: 0xc7be00a0  lwc1        $f30, 0xA0($sp)
    ctx->pc = 0x186320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x186324: 0xc7bd0098  lwc1        $f29, 0x98($sp)
    ctx->pc = 0x186324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x186328: 0xc7bc0090  lwc1        $f28, 0x90($sp)
    ctx->pc = 0x186328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x18632c: 0xc7bb0088  lwc1        $f27, 0x88($sp)
    ctx->pc = 0x18632cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x186330: 0xc7ba0080  lwc1        $f26, 0x80($sp)
    ctx->pc = 0x186330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x186334: 0xc7b90078  lwc1        $f25, 0x78($sp)
    ctx->pc = 0x186334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x186338: 0xc7b80070  lwc1        $f24, 0x70($sp)
    ctx->pc = 0x186338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x18633c: 0xc7b70068  lwc1        $f23, 0x68($sp)
    ctx->pc = 0x18633cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x186340: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x186340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x186344: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x186344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x186348: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x186348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18634c: 0x3e00008  jr          $ra
    ctx->pc = 0x18634Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18634Cu;
        // 0x186350: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18634Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186354u;
    // 0x186354: 0x0  nop
    ctx->pc = 0x186354u;
    // NOP
    ctx->pc = 0x186358u;
}
