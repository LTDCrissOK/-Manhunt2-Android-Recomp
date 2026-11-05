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

// Function: sub_00176948
// Address: 0x176948 - 0x176a20
void sub_00176948_0x176948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176948_0x176948");
#endif

    switch (ctx->pc) {
        case 0x176948u: goto label_176948;
        case 0x17694cu: goto label_17694c;
        case 0x176950u: goto label_176950;
        case 0x176954u: goto label_176954;
        case 0x176958u: goto label_176958;
        case 0x17695cu: goto label_17695c;
        case 0x176960u: goto label_176960;
        case 0x176964u: goto label_176964;
        case 0x176968u: goto label_176968;
        case 0x17696cu: goto label_17696c;
        case 0x176970u: goto label_176970;
        case 0x176974u: goto label_176974;
        case 0x176978u: goto label_176978;
        case 0x17697cu: goto label_17697c;
        case 0x176980u: goto label_176980;
        case 0x176984u: goto label_176984;
        case 0x176988u: goto label_176988;
        case 0x17698cu: goto label_17698c;
        case 0x176990u: goto label_176990;
        case 0x176994u: goto label_176994;
        case 0x176998u: goto label_176998;
        case 0x17699cu: goto label_17699c;
        case 0x1769a0u: goto label_1769a0;
        case 0x1769a4u: goto label_1769a4;
        case 0x1769a8u: goto label_1769a8;
        case 0x1769acu: goto label_1769ac;
        case 0x1769b0u: goto label_1769b0;
        case 0x1769b4u: goto label_1769b4;
        case 0x1769b8u: goto label_1769b8;
        case 0x1769bcu: goto label_1769bc;
        case 0x1769c0u: goto label_1769c0;
        case 0x1769c4u: goto label_1769c4;
        case 0x1769c8u: goto label_1769c8;
        case 0x1769ccu: goto label_1769cc;
        case 0x1769d0u: goto label_1769d0;
        case 0x1769d4u: goto label_1769d4;
        case 0x1769d8u: goto label_1769d8;
        case 0x1769dcu: goto label_1769dc;
        case 0x1769e0u: goto label_1769e0;
        case 0x1769e4u: goto label_1769e4;
        case 0x1769e8u: goto label_1769e8;
        case 0x1769ecu: goto label_1769ec;
        case 0x1769f0u: goto label_1769f0;
        case 0x1769f4u: goto label_1769f4;
        case 0x1769f8u: goto label_1769f8;
        case 0x1769fcu: goto label_1769fc;
        case 0x176a00u: goto label_176a00;
        case 0x176a04u: goto label_176a04;
        case 0x176a08u: goto label_176a08;
        case 0x176a0cu: goto label_176a0c;
        case 0x176a10u: goto label_176a10;
        case 0x176a14u: goto label_176a14;
        case 0x176a18u: goto label_176a18;
        case 0x176a1cu: goto label_176a1c;
        default: break;
    }

    ctx->pc = 0x176948u;

label_176948:
    // 0x176948: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x176948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_17694c:
    // 0x17694c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17694cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_176950:
    // 0x176950: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x176950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_176954:
    // 0x176954: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x176954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_176958:
    // 0x176958: 0xc04f97c  jal         func_13E5F0
label_17695c:
    if (ctx->pc == 0x17695Cu) {
        ctx->pc = 0x17695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176958u;
        // 0x17695c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176960u;
        goto label_176960;
    }
    ctx->pc = 0x176958u;
    SET_GPR_U32(ctx, 31, 0x176960u);
    ctx->pc = 0x17695Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176958u;
    // 0x17695c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E5F0u, 0x176958u, 0x176960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176960u;
label_176960:
    // 0x176960: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x176960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_176964:
    // 0x176964: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x176964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_176968:
    // 0x176968: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x176968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
label_17696c:
    // 0x17696c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x17696cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_176970:
    // 0x176970: 0xc04f8fc  jal         func_13E3F0
label_176974:
    if (ctx->pc == 0x176974u) {
        ctx->pc = 0x176974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176970u;
        // 0x176974: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176978u;
        goto label_176978;
    }
    ctx->pc = 0x176970u;
    SET_GPR_U32(ctx, 31, 0x176978u);
    ctx->pc = 0x176974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176970u;
    // 0x176974: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E3F0u, 0x176970u, 0x176978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176978u;
label_176978:
    // 0x176978: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x176978u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17697c:
    // 0x17697c: 0x8e0500bc  lw          $a1, 0xBC($s0)
    ctx->pc = 0x17697cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_176980:
    // 0x176980: 0xc045fea  jal         func_117FA8
label_176984:
    if (ctx->pc == 0x176984u) {
        ctx->pc = 0x176984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176980u;
        // 0x176984: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176988u;
        goto label_176988;
    }
    ctx->pc = 0x176980u;
    SET_GPR_U32(ctx, 31, 0x176988u);
    ctx->pc = 0x176984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176980u;
    // 0x176984: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x176980u, 0x176988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176988u;
label_176988:
    // 0x176988: 0xc60c00dc  lwc1        $f12, 0xDC($s0)
    ctx->pc = 0x176988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_17698c:
    // 0x17698c: 0xc046290  jal         func_118A40
label_176990:
    if (ctx->pc == 0x176990u) {
        ctx->pc = 0x176990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17698Cu;
        // 0x176990: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176994u;
        goto label_176994;
    }
    ctx->pc = 0x17698Cu;
    SET_GPR_U32(ctx, 31, 0x176994u);
    ctx->pc = 0x176990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17698Cu;
    // 0x176990: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x17698Cu, 0x176994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176994u;
label_176994:
    // 0x176994: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x176994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_176998:
    // 0x176998: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x176998u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_17699c:
    // 0x17699c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x17699cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1769a0:
    // 0x1769a0: 0xc046256  jal         func_118958
label_1769a4:
    if (ctx->pc == 0x1769A4u) {
        ctx->pc = 0x1769A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1769A0u;
        // 0x1769a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1769A8u;
        goto label_1769a8;
    }
    ctx->pc = 0x1769A0u;
    SET_GPR_U32(ctx, 31, 0x1769A8u);
    ctx->pc = 0x1769A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1769A0u;
    // 0x1769a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118958u, 0x1769A0u, 0x1769A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1769A8u;
label_1769a8:
    // 0x1769a8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1769a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1769ac:
    // 0x1769ac: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x1769acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_1769b0:
    // 0x1769b0: 0x8e030100  lw          $v1, 0x100($s0)
    ctx->pc = 0x1769b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_1769b4:
    // 0x1769b4: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_1769b8:
    if (ctx->pc == 0x1769B8u) {
        ctx->pc = 0x1769B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1769B4u;
        // 0x1769b8: 0x8e050104  lw          $a1, 0x104($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1769BCu;
        goto label_1769bc;
    }
    ctx->pc = 0x1769B4u;
    {
        const bool branch_taken_0x1769b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1769b4) {
            ctx->pc = 0x1769B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1769B4u;
            // 0x1769b8: 0x8e050104  lw          $a1, 0x104($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1769CCu;
            goto label_1769cc;
        }
    }
    ctx->pc = 0x1769BCu;
label_1769bc:
    // 0x1769bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1769bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1769c0:
    // 0x1769c0: 0xc046058  jal         func_118160
label_1769c4:
    if (ctx->pc == 0x1769C4u) {
        ctx->pc = 0x1769C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1769C0u;
        // 0x1769c4: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1769C8u;
        goto label_1769c8;
    }
    ctx->pc = 0x1769C0u;
    SET_GPR_U32(ctx, 31, 0x1769C8u);
    ctx->pc = 0x1769C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1769C0u;
    // 0x1769c4: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118160u, 0x1769C0u, 0x1769C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1769C8u;
label_1769c8:
    // 0x1769c8: 0x8e050104  lw          $a1, 0x104($s0)
    ctx->pc = 0x1769c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_1769cc:
    // 0x1769cc: 0xc0460c4  jal         func_118310
label_1769d0:
    if (ctx->pc == 0x1769D0u) {
        ctx->pc = 0x1769D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1769CCu;
        // 0x1769d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1769D4u;
        goto label_1769d4;
    }
    ctx->pc = 0x1769CCu;
    SET_GPR_U32(ctx, 31, 0x1769D4u);
    ctx->pc = 0x1769D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1769CCu;
    // 0x1769d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118310u, 0x1769CCu, 0x1769D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1769D4u;
label_1769d4:
    // 0x1769d4: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x1769d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_1769d8:
    // 0x1769d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1769d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1769dc:
    // 0x1769dc: 0xc0461e8  jal         func_1187A0
label_1769e0:
    if (ctx->pc == 0x1769E0u) {
        ctx->pc = 0x1769E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1769DCu;
        // 0x1769e0: 0x8c450088  lw          $a1, 0x88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1769E4u;
        goto label_1769e4;
    }
    ctx->pc = 0x1769DCu;
    SET_GPR_U32(ctx, 31, 0x1769E4u);
    ctx->pc = 0x1769E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1769DCu;
    // 0x1769e0: 0x8c450088  lw          $a1, 0x88($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187A0u, 0x1769DCu, 0x1769E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1769E4u;
label_1769e4:
    // 0x1769e4: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x1769e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_1769e8:
    // 0x1769e8: 0xc046190  jal         func_118640
label_1769ec:
    if (ctx->pc == 0x1769ECu) {
        ctx->pc = 0x1769ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1769E8u;
        // 0x1769ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1769F0u;
        goto label_1769f0;
    }
    ctx->pc = 0x1769E8u;
    SET_GPR_U32(ctx, 31, 0x1769F0u);
    ctx->pc = 0x1769ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1769E8u;
    // 0x1769ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118640u, 0x1769E8u, 0x1769F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1769F0u;
label_1769f0:
    // 0x1769f0: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x1769f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_1769f4:
    // 0x1769f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1769f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1769f8:
    // 0x1769f8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1769f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1769fc:
    // 0x1769fc: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x1769fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_176a00:
    // 0x176a00: 0x40f809  jalr        $v0
label_176a04:
    if (ctx->pc == 0x176A04u) {
        ctx->pc = 0x176A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176A00u;
        // 0x176a04: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176A08u;
        goto label_176a08;
    }
    ctx->pc = 0x176A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x176A08u);
        ctx->pc = 0x176A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176A00u;
        // 0x176a04: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176A00u, 0x176A08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x176A08u;
label_176a08:
    // 0x176a08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x176a08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_176a0c:
    // 0x176a0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x176a0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_176a10:
    // 0x176a10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x176a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_176a14:
    // 0x176a14: 0x3e00008  jr          $ra
label_176a18:
    if (ctx->pc == 0x176A18u) {
        ctx->pc = 0x176A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176A14u;
        // 0x176a18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176A1Cu;
        goto label_176a1c;
    }
    ctx->pc = 0x176A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176A14u;
        // 0x176a18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176A1Cu;
label_176a1c:
    // 0x176a1c: 0x0  nop
    ctx->pc = 0x176a1cu;
    // NOP
    ctx->pc = 0x176a20u;
}
