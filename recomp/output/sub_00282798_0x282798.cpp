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

// Function: sub_00282798
// Address: 0x282798 - 0x282a90
void sub_00282798_0x282798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282798_0x282798");
#endif

    switch (ctx->pc) {
        case 0x282798u: goto label_282798;
        case 0x28279cu: goto label_28279c;
        case 0x2827a0u: goto label_2827a0;
        case 0x2827a4u: goto label_2827a4;
        case 0x2827a8u: goto label_2827a8;
        case 0x2827acu: goto label_2827ac;
        case 0x2827b0u: goto label_2827b0;
        case 0x2827b4u: goto label_2827b4;
        case 0x2827b8u: goto label_2827b8;
        case 0x2827bcu: goto label_2827bc;
        case 0x2827c0u: goto label_2827c0;
        case 0x2827c4u: goto label_2827c4;
        case 0x2827c8u: goto label_2827c8;
        case 0x2827ccu: goto label_2827cc;
        case 0x2827d0u: goto label_2827d0;
        case 0x2827d4u: goto label_2827d4;
        case 0x2827d8u: goto label_2827d8;
        case 0x2827dcu: goto label_2827dc;
        case 0x2827e0u: goto label_2827e0;
        case 0x2827e4u: goto label_2827e4;
        case 0x2827e8u: goto label_2827e8;
        case 0x2827ecu: goto label_2827ec;
        case 0x2827f0u: goto label_2827f0;
        case 0x2827f4u: goto label_2827f4;
        case 0x2827f8u: goto label_2827f8;
        case 0x2827fcu: goto label_2827fc;
        case 0x282800u: goto label_282800;
        case 0x282804u: goto label_282804;
        case 0x282808u: goto label_282808;
        case 0x28280cu: goto label_28280c;
        case 0x282810u: goto label_282810;
        case 0x282814u: goto label_282814;
        case 0x282818u: goto label_282818;
        case 0x28281cu: goto label_28281c;
        case 0x282820u: goto label_282820;
        case 0x282824u: goto label_282824;
        case 0x282828u: goto label_282828;
        case 0x28282cu: goto label_28282c;
        case 0x282830u: goto label_282830;
        case 0x282834u: goto label_282834;
        case 0x282838u: goto label_282838;
        case 0x28283cu: goto label_28283c;
        case 0x282840u: goto label_282840;
        case 0x282844u: goto label_282844;
        case 0x282848u: goto label_282848;
        case 0x28284cu: goto label_28284c;
        case 0x282850u: goto label_282850;
        case 0x282854u: goto label_282854;
        case 0x282858u: goto label_282858;
        case 0x28285cu: goto label_28285c;
        case 0x282860u: goto label_282860;
        case 0x282864u: goto label_282864;
        case 0x282868u: goto label_282868;
        case 0x28286cu: goto label_28286c;
        case 0x282870u: goto label_282870;
        case 0x282874u: goto label_282874;
        case 0x282878u: goto label_282878;
        case 0x28287cu: goto label_28287c;
        case 0x282880u: goto label_282880;
        case 0x282884u: goto label_282884;
        case 0x282888u: goto label_282888;
        case 0x28288cu: goto label_28288c;
        case 0x282890u: goto label_282890;
        case 0x282894u: goto label_282894;
        case 0x282898u: goto label_282898;
        case 0x28289cu: goto label_28289c;
        case 0x2828a0u: goto label_2828a0;
        case 0x2828a4u: goto label_2828a4;
        case 0x2828a8u: goto label_2828a8;
        case 0x2828acu: goto label_2828ac;
        case 0x2828b0u: goto label_2828b0;
        case 0x2828b4u: goto label_2828b4;
        case 0x2828b8u: goto label_2828b8;
        case 0x2828bcu: goto label_2828bc;
        case 0x2828c0u: goto label_2828c0;
        case 0x2828c4u: goto label_2828c4;
        case 0x2828c8u: goto label_2828c8;
        case 0x2828ccu: goto label_2828cc;
        case 0x2828d0u: goto label_2828d0;
        case 0x2828d4u: goto label_2828d4;
        case 0x2828d8u: goto label_2828d8;
        case 0x2828dcu: goto label_2828dc;
        case 0x2828e0u: goto label_2828e0;
        case 0x2828e4u: goto label_2828e4;
        case 0x2828e8u: goto label_2828e8;
        case 0x2828ecu: goto label_2828ec;
        case 0x2828f0u: goto label_2828f0;
        case 0x2828f4u: goto label_2828f4;
        case 0x2828f8u: goto label_2828f8;
        case 0x2828fcu: goto label_2828fc;
        case 0x282900u: goto label_282900;
        case 0x282904u: goto label_282904;
        case 0x282908u: goto label_282908;
        case 0x28290cu: goto label_28290c;
        case 0x282910u: goto label_282910;
        case 0x282914u: goto label_282914;
        case 0x282918u: goto label_282918;
        case 0x28291cu: goto label_28291c;
        case 0x282920u: goto label_282920;
        case 0x282924u: goto label_282924;
        case 0x282928u: goto label_282928;
        case 0x28292cu: goto label_28292c;
        case 0x282930u: goto label_282930;
        case 0x282934u: goto label_282934;
        case 0x282938u: goto label_282938;
        case 0x28293cu: goto label_28293c;
        case 0x282940u: goto label_282940;
        case 0x282944u: goto label_282944;
        case 0x282948u: goto label_282948;
        case 0x28294cu: goto label_28294c;
        case 0x282950u: goto label_282950;
        case 0x282954u: goto label_282954;
        case 0x282958u: goto label_282958;
        case 0x28295cu: goto label_28295c;
        case 0x282960u: goto label_282960;
        case 0x282964u: goto label_282964;
        case 0x282968u: goto label_282968;
        case 0x28296cu: goto label_28296c;
        case 0x282970u: goto label_282970;
        case 0x282974u: goto label_282974;
        case 0x282978u: goto label_282978;
        case 0x28297cu: goto label_28297c;
        case 0x282980u: goto label_282980;
        case 0x282984u: goto label_282984;
        case 0x282988u: goto label_282988;
        case 0x28298cu: goto label_28298c;
        case 0x282990u: goto label_282990;
        case 0x282994u: goto label_282994;
        case 0x282998u: goto label_282998;
        case 0x28299cu: goto label_28299c;
        case 0x2829a0u: goto label_2829a0;
        case 0x2829a4u: goto label_2829a4;
        case 0x2829a8u: goto label_2829a8;
        case 0x2829acu: goto label_2829ac;
        case 0x2829b0u: goto label_2829b0;
        case 0x2829b4u: goto label_2829b4;
        case 0x2829b8u: goto label_2829b8;
        case 0x2829bcu: goto label_2829bc;
        case 0x2829c0u: goto label_2829c0;
        case 0x2829c4u: goto label_2829c4;
        case 0x2829c8u: goto label_2829c8;
        case 0x2829ccu: goto label_2829cc;
        case 0x2829d0u: goto label_2829d0;
        case 0x2829d4u: goto label_2829d4;
        case 0x2829d8u: goto label_2829d8;
        case 0x2829dcu: goto label_2829dc;
        case 0x2829e0u: goto label_2829e0;
        case 0x2829e4u: goto label_2829e4;
        case 0x2829e8u: goto label_2829e8;
        case 0x2829ecu: goto label_2829ec;
        case 0x2829f0u: goto label_2829f0;
        case 0x2829f4u: goto label_2829f4;
        case 0x2829f8u: goto label_2829f8;
        case 0x2829fcu: goto label_2829fc;
        case 0x282a00u: goto label_282a00;
        case 0x282a04u: goto label_282a04;
        case 0x282a08u: goto label_282a08;
        case 0x282a0cu: goto label_282a0c;
        case 0x282a10u: goto label_282a10;
        case 0x282a14u: goto label_282a14;
        case 0x282a18u: goto label_282a18;
        case 0x282a1cu: goto label_282a1c;
        case 0x282a20u: goto label_282a20;
        case 0x282a24u: goto label_282a24;
        case 0x282a28u: goto label_282a28;
        case 0x282a2cu: goto label_282a2c;
        case 0x282a30u: goto label_282a30;
        case 0x282a34u: goto label_282a34;
        case 0x282a38u: goto label_282a38;
        case 0x282a3cu: goto label_282a3c;
        case 0x282a40u: goto label_282a40;
        case 0x282a44u: goto label_282a44;
        case 0x282a48u: goto label_282a48;
        case 0x282a4cu: goto label_282a4c;
        case 0x282a50u: goto label_282a50;
        case 0x282a54u: goto label_282a54;
        case 0x282a58u: goto label_282a58;
        case 0x282a5cu: goto label_282a5c;
        case 0x282a60u: goto label_282a60;
        case 0x282a64u: goto label_282a64;
        case 0x282a68u: goto label_282a68;
        case 0x282a6cu: goto label_282a6c;
        case 0x282a70u: goto label_282a70;
        case 0x282a74u: goto label_282a74;
        case 0x282a78u: goto label_282a78;
        case 0x282a7cu: goto label_282a7c;
        case 0x282a80u: goto label_282a80;
        case 0x282a84u: goto label_282a84;
        case 0x282a88u: goto label_282a88;
        case 0x282a8cu: goto label_282a8c;
        default: break;
    }

    ctx->pc = 0x282798u;

label_282798:
    // 0x282798: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x282798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_28279c:
    // 0x28279c: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x28279cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_2827a0:
    // 0x2827a0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2827a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_2827a4:
    // 0x2827a4: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x2827a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
label_2827a8:
    // 0x2827a8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2827a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_2827ac:
    // 0x2827ac: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2827acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_2827b0:
    // 0x2827b0: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2827b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_2827b4:
    // 0x2827b4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2827b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2827b8:
    // 0x2827b8: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x2827b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_2827bc:
    // 0x2827bc: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x2827bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_2827c0:
    // 0x2827c0: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x2827c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
label_2827c4:
    // 0x2827c4: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x2827c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_2827c8:
    // 0x2827c8: 0x2448a3f8  addiu       $t0, $v0, -0x5C08
    ctx->pc = 0x2827c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943736));
label_2827cc:
    // 0x2827cc: 0x89030003  lwl         $v1, 0x3($t0)
    ctx->pc = 0x2827ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_2827d0:
    // 0x2827d0: 0x99030000  lwr         $v1, 0x0($t0)
    ctx->pc = 0x2827d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_2827d4:
    // 0x2827d4: 0x81060004  lb          $a2, 0x4($t0)
    ctx->pc = 0x2827d4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
label_2827d8:
    // 0x2827d8: 0x81070005  lb          $a3, 0x5($t0)
    ctx->pc = 0x2827d8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 5)));
label_2827dc:
    // 0x2827dc: 0xaba30003  swl         $v1, 0x3($sp)
    ctx->pc = 0x2827dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_2827e0:
    // 0x2827e0: 0xbba30000  swr         $v1, 0x0($sp)
    ctx->pc = 0x2827e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_2827e4:
    // 0x2827e4: 0xa3a60004  sb          $a2, 0x4($sp)
    ctx->pc = 0x2827e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 6));
label_2827e8:
    // 0x2827e8: 0xa3a70005  sb          $a3, 0x5($sp)
    ctx->pc = 0x2827e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 5), (uint8_t)GPR_U32(ctx, 7));
label_2827ec:
    // 0x2827ec: 0x81030006  lb          $v1, 0x6($t0)
    ctx->pc = 0x2827ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 6)));
label_2827f0:
    // 0x2827f0: 0xa3a30006  sb          $v1, 0x6($sp)
    ctx->pc = 0x2827f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 6), (uint8_t)GPR_U32(ctx, 3));
label_2827f4:
    // 0x2827f4: 0xc09dcc6  jal         func_277318
label_2827f8:
    if (ctx->pc == 0x2827F8u) {
        ctx->pc = 0x2827F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2827F4u;
        // 0x2827f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2827FCu;
        goto label_2827fc;
    }
    ctx->pc = 0x2827F4u;
    SET_GPR_U32(ctx, 31, 0x2827FCu);
    ctx->pc = 0x2827F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2827F4u;
    // 0x2827f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277318u, 0x2827F4u, 0x2827FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2827FCu;
label_2827fc:
    // 0x2827fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2827fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_282800:
    // 0x282800: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x282800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_282804:
    // 0x282804: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x282804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_282808:
    // 0x282808: 0x40f809  jalr        $v0
label_28280c:
    if (ctx->pc == 0x28280Cu) {
        ctx->pc = 0x28280Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282808u;
        // 0x28280c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282810u;
        goto label_282810;
    }
    ctx->pc = 0x282808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x282810u);
        ctx->pc = 0x28280Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282808u;
        // 0x28280c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282808u, 0x282810u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x282810u;
label_282810:
    // 0x282810: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x282810u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_282814:
    // 0x282814: 0x5ee00007  bgtzl       $s7, . + 4 + (0x7 << 2)
label_282818:
    if (ctx->pc == 0x282818u) {
        ctx->pc = 0x282818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282814u;
        // 0x282818: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28281Cu;
        goto label_28281c;
    }
    ctx->pc = 0x282814u;
    {
        const bool branch_taken_0x282814 = (GPR_S32(ctx, 23) > 0);
        if (branch_taken_0x282814) {
            ctx->pc = 0x282818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282814u;
            // 0x282818: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282834u;
            goto label_282834;
        }
    }
    ctx->pc = 0x28281Cu;
label_28281c:
    // 0x28281c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x28281cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_282820:
    // 0x282820: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x282820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_282824:
    // 0x282824: 0x40f809  jalr        $v0
label_282828:
    if (ctx->pc == 0x282828u) {
        ctx->pc = 0x282828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282824u;
        // 0x282828: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28282Cu;
        goto label_28282c;
    }
    ctx->pc = 0x282824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28282Cu);
        ctx->pc = 0x282828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282824u;
        // 0x282828: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282824u, 0x28282Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28282Cu;
label_28282c:
    // 0x28282c: 0x1000008b  b           . + 4 + (0x8B << 2)
label_282830:
    if (ctx->pc == 0x282830u) {
        ctx->pc = 0x282830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28282Cu;
        // 0x282830: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282834u;
        goto label_282834;
    }
    ctx->pc = 0x28282Cu;
    {
        const bool branch_taken_0x28282c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28282Cu;
        // 0x282830: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28282c) {
            ctx->pc = 0x282A5Cu;
            goto label_282a5c;
        }
    }
    ctx->pc = 0x282834u;
label_282834:
    // 0x282834: 0xc0f52a8  jal         func_3D4AA0
label_282838:
    if (ctx->pc == 0x282838u) {
        ctx->pc = 0x282838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282834u;
        // 0x282838: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28283Cu;
        goto label_28283c;
    }
    ctx->pc = 0x282834u;
    SET_GPR_U32(ctx, 31, 0x28283Cu);
    ctx->pc = 0x282838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282834u;
    // 0x282838: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x282834u, 0x28283Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28283Cu;
label_28283c:
    // 0x28283c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x28283cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_282840:
    // 0x282840: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x282840u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_282844:
    // 0x282844: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x282844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_282848:
    // 0x282848: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x282848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_28284c:
    // 0x28284c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x28284cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_282850:
    // 0x282850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_282854:
    // 0x282854: 0x40f809  jalr        $v0
label_282858:
    if (ctx->pc == 0x282858u) {
        ctx->pc = 0x282858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282854u;
        // 0x282858: 0x2c0882d  daddu       $s1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28285Cu;
        goto label_28285c;
    }
    ctx->pc = 0x282854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28285Cu);
        ctx->pc = 0x282858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282854u;
        // 0x282858: 0x2c0882d  daddu       $s1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282854u, 0x28285Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28285Cu;
label_28285c:
    // 0x28285c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x28285cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_282860:
    // 0x282860: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x282860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_282864:
    // 0x282864: 0x40f809  jalr        $v0
label_282868:
    if (ctx->pc == 0x282868u) {
        ctx->pc = 0x282868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282864u;
        // 0x282868: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28286Cu;
        goto label_28286c;
    }
    ctx->pc = 0x282864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28286Cu);
        ctx->pc = 0x282868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282864u;
        // 0x282868: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282864u, 0x28286Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28286Cu;
label_28286c:
    // 0x28286c: 0xc0efc2e  jal         func_3BF0B8
label_282870:
    if (ctx->pc == 0x282870u) {
        ctx->pc = 0x282870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28286Cu;
        // 0x282870: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282874u;
        goto label_282874;
    }
    ctx->pc = 0x28286Cu;
    SET_GPR_U32(ctx, 31, 0x282874u);
    ctx->pc = 0x282870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28286Cu;
    // 0x282870: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x28286Cu, 0x282874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282874u;
label_282874:
    // 0x282874: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x282874u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_282878:
    // 0x282878: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x282878u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_28287c:
    // 0x28287c: 0x83a20000  lb          $v0, 0x0($sp)
    ctx->pc = 0x28287cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_282880:
    // 0x282880: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_282884:
    if (ctx->pc == 0x282884u) {
        ctx->pc = 0x282884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282880u;
        // 0x282884: 0x2d73021  addu        $a2, $s6, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282888u;
        goto label_282888;
    }
    ctx->pc = 0x282880u;
    {
        const bool branch_taken_0x282880 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x282884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282880u;
        // 0x282884: 0x2d73021  addu        $a2, $s6, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282880) {
            ctx->pc = 0x2828A0u;
            goto label_2828a0;
        }
    }
    ctx->pc = 0x282888u;
label_282888:
    // 0x282888: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x282888u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_28288c:
    // 0x28288c: 0x226102b  sltu        $v0, $s1, $a2
    ctx->pc = 0x28288cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_282890:
    // 0x282890: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
label_282894:
    if (ctx->pc == 0x282894u) {
        ctx->pc = 0x282894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282890u;
        // 0x282894: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282898u;
        goto label_282898;
    }
    ctx->pc = 0x282890u;
    {
        const bool branch_taken_0x282890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282890u;
        // 0x282894: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282890) {
            ctx->pc = 0x282A40u;
            goto label_282a40;
        }
    }
    ctx->pc = 0x282898u;
label_282898:
    // 0x282898: 0x1000000d  b           . + 4 + (0xD << 2)
label_28289c:
    if (ctx->pc == 0x28289Cu) {
        ctx->pc = 0x2828A0u;
        goto label_2828a0;
    }
    ctx->pc = 0x282898u;
    {
        const bool branch_taken_0x282898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x282898) {
            ctx->pc = 0x2828D0u;
            goto label_2828d0;
        }
    }
    ctx->pc = 0x2828A0u;
label_2828a0:
    // 0x2828a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2828a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2828a4:
    // 0x2828a4: 0x226102b  sltu        $v0, $s1, $a2
    ctx->pc = 0x2828a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_2828a8:
    // 0x2828a8: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
label_2828ac:
    if (ctx->pc == 0x2828ACu) {
        ctx->pc = 0x2828ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2828A8u;
        // 0x2828ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2828B0u;
        goto label_2828b0;
    }
    ctx->pc = 0x2828A8u;
    {
        const bool branch_taken_0x2828a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2828ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2828A8u;
        // 0x2828ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2828a8) {
            ctx->pc = 0x282A40u;
            goto label_282a40;
        }
    }
    ctx->pc = 0x2828B0u;
label_2828b0:
    // 0x2828b0: 0x3a51021  addu        $v0, $sp, $a1
    ctx->pc = 0x2828b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
label_2828b4:
    // 0x2828b4: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x2828b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2828b8:
    // 0x2828b8: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2828b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2828bc:
    // 0x2828bc: 0x1483fff9  bne         $a0, $v1, . + 4 + (-0x7 << 2)
label_2828c0:
    if (ctx->pc == 0x2828C0u) {
        ctx->pc = 0x2828C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2828BCu;
        // 0x2828c0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2828C4u;
        goto label_2828c4;
    }
    ctx->pc = 0x2828BCu;
    {
        const bool branch_taken_0x2828bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2828C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2828BCu;
        // 0x2828c0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2828bc) {
            ctx->pc = 0x2828A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2828a4;
        }
    }
    ctx->pc = 0x2828C4u;
label_2828c4:
    // 0x2828c4: 0x226102b  sltu        $v0, $s1, $a2
    ctx->pc = 0x2828c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_2828c8:
    // 0x2828c8: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
label_2828cc:
    if (ctx->pc == 0x2828CCu) {
        ctx->pc = 0x2828CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2828C8u;
        // 0x2828cc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2828D0u;
        goto label_2828d0;
    }
    ctx->pc = 0x2828C8u;
    {
        const bool branch_taken_0x2828c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2828CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2828C8u;
        // 0x2828cc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2828c8) {
            ctx->pc = 0x282A40u;
            goto label_282a40;
        }
    }
    ctx->pc = 0x2828D0u;
label_2828d0:
    // 0x2828d0: 0x14befff8  bne         $a1, $fp, . + 4 + (-0x8 << 2)
label_2828d4:
    if (ctx->pc == 0x2828D4u) {
        ctx->pc = 0x2828D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2828D0u;
        // 0x2828d4: 0x3a51021  addu        $v0, $sp, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2828D8u;
        goto label_2828d8;
    }
    ctx->pc = 0x2828D0u;
    {
        const bool branch_taken_0x2828d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 30));
        ctx->pc = 0x2828D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2828D0u;
        // 0x2828d4: 0x3a51021  addu        $v0, $sp, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2828d0) {
            ctx->pc = 0x2828B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2828b4;
        }
    }
    ctx->pc = 0x2828D8u;
label_2828d8:
    // 0x2828d8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2828d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2828dc:
    // 0x2828dc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2828dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_2828e0:
    // 0x2828e0: 0x2452b308  addiu       $s2, $v0, -0x4CF8
    ctx->pc = 0x2828e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947592));
label_2828e4:
    // 0x2828e4: 0x38080  sll         $s0, $v1, 2
    ctx->pc = 0x2828e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2828e8:
    // 0x2828e8: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x2828e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_2828ec:
    // 0x2828ec: 0x2129821  addu        $s3, $s0, $s2
    ctx->pc = 0x2828ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_2828f0:
    // 0x2828f0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2828f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2828f4:
    // 0x2828f4: 0x8a240003  lwl         $a0, 0x3($s1)
    ctx->pc = 0x2828f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
label_2828f8:
    // 0x2828f8: 0x9a240000  lwr         $a0, 0x0($s1)
    ctx->pc = 0x2828f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
label_2828fc:
    // 0x2828fc: 0xaa640003  swl         $a0, 0x3($s3)
    ctx->pc = 0x2828fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_282900:
    // 0x282900: 0x26430020  addiu       $v1, $s2, 0x20
    ctx->pc = 0x282900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_282904:
    // 0x282904: 0xba640000  swr         $a0, 0x0($s3)
    ctx->pc = 0x282904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_282908:
    // 0x282908: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x282908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_28290c:
    // 0x28290c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x28290cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_282910:
    // 0x282910: 0x8a280003  lwl         $t0, 0x3($s1)
    ctx->pc = 0x282910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
label_282914:
    // 0x282914: 0x9a280000  lwr         $t0, 0x0($s1)
    ctx->pc = 0x282914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
label_282918:
    // 0x282918: 0xa8480003  swl         $t0, 0x3($v0)
    ctx->pc = 0x282918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_28291c:
    // 0x28291c: 0xb8480000  swr         $t0, 0x0($v0)
    ctx->pc = 0x28291cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_282920:
    // 0x282920: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x282920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_282924:
    // 0x282924: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x282924u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_282928:
    // 0x282928: 0x202a821  addu        $s5, $s0, $v0
    ctx->pc = 0x282928u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_28292c:
    // 0x28292c: 0x8a270003  lwl         $a3, 0x3($s1)
    ctx->pc = 0x28292cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
label_282930:
    // 0x282930: 0x9a270000  lwr         $a3, 0x0($s1)
    ctx->pc = 0x282930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
label_282934:
    // 0x282934: 0xa8670003  swl         $a3, 0x3($v1)
    ctx->pc = 0x282934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_282938:
    // 0x282938: 0xb8670000  swr         $a3, 0x0($v1)
    ctx->pc = 0x282938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_28293c:
    // 0x28293c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x28293cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_282940:
    // 0x282940: 0x26420040  addiu       $v0, $s2, 0x40
    ctx->pc = 0x282940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_282944:
    // 0x282944: 0x8a250003  lwl         $a1, 0x3($s1)
    ctx->pc = 0x282944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
label_282948:
    // 0x282948: 0x9a250000  lwr         $a1, 0x0($s1)
    ctx->pc = 0x282948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
label_28294c:
    // 0x28294c: 0xaaa50003  swl         $a1, 0x3($s5)
    ctx->pc = 0x28294cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_282950:
    // 0x282950: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x282950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_282954:
    // 0x282954: 0xbaa50000  swr         $a1, 0x0($s5)
    ctx->pc = 0x282954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_282958:
    // 0x282958: 0x26430050  addiu       $v1, $s2, 0x50
    ctx->pc = 0x282958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_28295c:
    // 0x28295c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x28295cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_282960:
    // 0x282960: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x282960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_282964:
    // 0x282964: 0x8a240003  lwl         $a0, 0x3($s1)
    ctx->pc = 0x282964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
label_282968:
    // 0x282968: 0x9a240000  lwr         $a0, 0x0($s1)
    ctx->pc = 0x282968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
label_28296c:
    // 0x28296c: 0xa8440003  swl         $a0, 0x3($v0)
    ctx->pc = 0x28296cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_282970:
    // 0x282970: 0xb8440000  swr         $a0, 0x0($v0)
    ctx->pc = 0x282970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_282974:
    // 0x282974: 0x2642fff0  addiu       $v0, $s2, -0x10
    ctx->pc = 0x282974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967280));
label_282978:
    // 0x282978: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x282978u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_28297c:
    // 0x28297c: 0x202a021  addu        $s4, $s0, $v0
    ctx->pc = 0x28297cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_282980:
    // 0x282980: 0x8a280003  lwl         $t0, 0x3($s1)
    ctx->pc = 0x282980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
label_282984:
    // 0x282984: 0x9a280000  lwr         $t0, 0x0($s1)
    ctx->pc = 0x282984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
label_282988:
    // 0x282988: 0xa8680003  swl         $t0, 0x3($v1)
    ctx->pc = 0x282988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_28298c:
    // 0x28298c: 0xb8680000  swr         $t0, 0x0($v1)
    ctx->pc = 0x28298cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_282990:
    // 0x282990: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x282990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_282994:
    // 0x282994: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_282998:
    if (ctx->pc == 0x282998u) {
        ctx->pc = 0x282998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282994u;
        // 0x282998: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28299Cu;
        goto label_28299c;
    }
    ctx->pc = 0x282994u;
    {
        const bool branch_taken_0x282994 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x282998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282994u;
        // 0x282998: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282994) {
            ctx->pc = 0x2829A4u;
            goto label_2829a4;
        }
    }
    ctx->pc = 0x28299Cu;
label_28299c:
    // 0x28299c: 0xc0b2524  jal         func_2C9490
label_2829a0:
    if (ctx->pc == 0x2829A0u) {
        ctx->pc = 0x2829A4u;
        goto label_2829a4;
    }
    ctx->pc = 0x28299Cu;
    SET_GPR_U32(ctx, 31, 0x2829A4u);
    ctx->pc = 0x2C9490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9490u, 0x28299Cu, 0x2829A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2829A4u;
label_2829a4:
    // 0x2829a4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2829a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2829a8:
    // 0x2829a8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2829a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2829ac:
    // 0x2829ac: 0xc0b241a  jal         func_2C9068
label_2829b0:
    if (ctx->pc == 0x2829B0u) {
        ctx->pc = 0x2829B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2829ACu;
        // 0x2829b0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2829B4u;
        goto label_2829b4;
    }
    ctx->pc = 0x2829ACu;
    SET_GPR_U32(ctx, 31, 0x2829B4u);
    ctx->pc = 0x2829B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2829ACu;
    // 0x2829b0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9068u, 0x2829ACu, 0x2829B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2829B4u;
label_2829b4:
    // 0x2829b4: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2829b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2829b8:
    // 0x2829b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2829b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2829bc:
    // 0x2829bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2829bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2829c0:
    // 0x2829c0: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x2829c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2829c4:
    // 0x2829c4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2829c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2829c8:
    // 0x2829c8: 0xc0efa49  jal         func_3BE924
label_2829cc:
    if (ctx->pc == 0x2829CCu) {
        ctx->pc = 0x2829CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2829C8u;
        // 0x2829cc: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2829D0u;
        goto label_2829d0;
    }
    ctx->pc = 0x2829C8u;
    SET_GPR_U32(ctx, 31, 0x2829D0u);
    ctx->pc = 0x2829CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2829C8u;
    // 0x2829cc: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x2829C8u, 0x2829D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2829D0u;
label_2829d0:
    // 0x2829d0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2829d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2829d4:
    // 0x2829d4: 0x2642ffe0  addiu       $v0, $s2, -0x20
    ctx->pc = 0x2829d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967264));
label_2829d8:
    // 0x2829d8: 0x2029021  addu        $s2, $s0, $v0
    ctx->pc = 0x2829d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2829dc:
    // 0x2829dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2829dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2829e0:
    // 0x2829e0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2829e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2829e4:
    // 0x2829e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2829e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2829e8:
    // 0x2829e8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2829ec:
    if (ctx->pc == 0x2829ECu) {
        ctx->pc = 0x2829ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2829E8u;
        // 0x2829ec: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2829F0u;
        goto label_2829f0;
    }
    ctx->pc = 0x2829E8u;
    {
        const bool branch_taken_0x2829e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2829ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2829E8u;
        // 0x2829ec: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2829e8) {
            ctx->pc = 0x2829F8u;
            goto label_2829f8;
        }
    }
    ctx->pc = 0x2829F0u;
label_2829f0:
    // 0x2829f0: 0xc0b2524  jal         func_2C9490
label_2829f4:
    if (ctx->pc == 0x2829F4u) {
        ctx->pc = 0x2829F8u;
        goto label_2829f8;
    }
    ctx->pc = 0x2829F0u;
    SET_GPR_U32(ctx, 31, 0x2829F8u);
    ctx->pc = 0x2C9490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9490u, 0x2829F0u, 0x2829F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2829F8u;
label_2829f8:
    // 0x2829f8: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2829f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2829fc:
    // 0x2829fc: 0x24100018  addiu       $s0, $zero, 0x18
    ctx->pc = 0x2829fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_282a00:
    // 0x282a00: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x282a00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_282a04:
    // 0x282a04: 0x902018  mult        $a0, $a0, $s0
    ctx->pc = 0x282a04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_282a08:
    // 0x282a08: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x282a08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_282a0c:
    // 0x282a0c: 0xc0b241a  jal         func_2C9068
label_282a10:
    if (ctx->pc == 0x282A10u) {
        ctx->pc = 0x282A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282A0Cu;
        // 0x282a10: 0xafa60010  sw          $a2, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282A14u;
        goto label_282a14;
    }
    ctx->pc = 0x282A0Cu;
    SET_GPR_U32(ctx, 31, 0x282A14u);
    ctx->pc = 0x282A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282A0Cu;
    // 0x282a10: 0xafa60010  sw          $a2, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9068u, 0x282A0Cu, 0x282A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282A14u;
label_282a14:
    // 0x282a14: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x282a14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_282a18:
    // 0x282a18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x282a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_282a1c:
    // 0x282a1c: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x282a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_282a20:
    // 0x282a20: 0xd00018  mult        $zero, $a2, $s0
    ctx->pc = 0x282a20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_282a24:
    // 0x282a24: 0x3012  mflo        $a2
    ctx->pc = 0x282a24u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_282a28:
    // 0x282a28: 0xc0efa49  jal         func_3BE924
label_282a2c:
    if (ctx->pc == 0x282A2Cu) {
        ctx->pc = 0x282A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282A28u;
        // 0x282a2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282A30u;
        goto label_282a30;
    }
    ctx->pc = 0x282A28u;
    SET_GPR_U32(ctx, 31, 0x282A30u);
    ctx->pc = 0x282A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282A28u;
    // 0x282a2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x282A28u, 0x282A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282A30u;
label_282a30:
    // 0x282a30: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x282a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_282a34:
    // 0x282a34: 0x701018  mult        $v0, $v1, $s0
    ctx->pc = 0x282a34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_282a38:
    // 0x282a38: 0x1000ff8f  b           . + 4 + (-0x71 << 2)
label_282a3c:
    if (ctx->pc == 0x282A3Cu) {
        ctx->pc = 0x282A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282A38u;
        // 0x282a3c: 0x518821  addu        $s1, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282A40u;
        goto label_282a40;
    }
    ctx->pc = 0x282A38u;
    {
        const bool branch_taken_0x282a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282A38u;
        // 0x282a3c: 0x518821  addu        $s1, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282a38) {
            ctx->pc = 0x282878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_282878;
        }
    }
    ctx->pc = 0x282A40u;
label_282a40:
    // 0x282a40: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x282a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_282a44:
    // 0x282a44: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x282a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_282a48:
    // 0x282a48: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
label_282a4c:
    if (ctx->pc == 0x282A4Cu) {
        ctx->pc = 0x282A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282A48u;
        // 0x282a4c: 0xac43b2e0  sw          $v1, -0x4D20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294947552), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282A50u;
        goto label_282a50;
    }
    ctx->pc = 0x282A48u;
    {
        const bool branch_taken_0x282a48 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x282A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282A48u;
        // 0x282a4c: 0xac43b2e0  sw          $v1, -0x4D20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294947552), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282a48) {
            ctx->pc = 0x282A58u;
            goto label_282a58;
        }
    }
    ctx->pc = 0x282A50u;
label_282a50:
    // 0x282a50: 0xc0f528a  jal         func_3D4A28
label_282a54:
    if (ctx->pc == 0x282A54u) {
        ctx->pc = 0x282A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282A50u;
        // 0x282a54: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282A58u;
        goto label_282a58;
    }
    ctx->pc = 0x282A50u;
    SET_GPR_U32(ctx, 31, 0x282A58u);
    ctx->pc = 0x282A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282A50u;
    // 0x282a54: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x282A50u, 0x282A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282A58u;
label_282a58:
    // 0x282a58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x282a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_282a5c:
    // 0x282a5c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x282a5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_282a60:
    // 0x282a60: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x282a60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_282a64:
    // 0x282a64: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x282a64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_282a68:
    // 0x282a68: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x282a68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_282a6c:
    // 0x282a6c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x282a6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_282a70:
    // 0x282a70: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x282a70u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_282a74:
    // 0x282a74: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x282a74u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_282a78:
    // 0x282a78: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x282a78u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_282a7c:
    // 0x282a7c: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x282a7cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_282a80:
    // 0x282a80: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x282a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_282a84:
    // 0x282a84: 0x3e00008  jr          $ra
label_282a88:
    if (ctx->pc == 0x282A88u) {
        ctx->pc = 0x282A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282A84u;
        // 0x282a88: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282A8Cu;
        goto label_282a8c;
    }
    ctx->pc = 0x282A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282A84u;
        // 0x282a88: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282A8Cu;
label_282a8c:
    // 0x282a8c: 0x0  nop
    ctx->pc = 0x282a8cu;
    // NOP
    ctx->pc = 0x282a90u;
}
