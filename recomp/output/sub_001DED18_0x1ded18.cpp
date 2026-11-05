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

// Function: sub_001DED18
// Address: 0x1ded18 - 0x1df118
void sub_001DED18_0x1ded18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DED18_0x1ded18");
#endif

    switch (ctx->pc) {
        case 0x1ded5cu: goto label_1ded5c;
        case 0x1ded74u: goto label_1ded74;
        case 0x1dedc4u: goto label_1dedc4;
        case 0x1dee08u: goto label_1dee08;
        case 0x1dee58u: goto label_1dee58;
        case 0x1deed8u: goto label_1deed8;
        case 0x1def60u: goto label_1def60;
        case 0x1def94u: goto label_1def94;
        case 0x1df08cu: goto label_1df08c;
        case 0x1df0e0u: goto label_1df0e0;
        default: break;
    }

    ctx->pc = 0x1ded18u;

    // 0x1ded18: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1ded18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1ded1c: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x1ded1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x1ded20: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x1ded20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x1ded24: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1ded24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ded28: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x1ded28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x1ded2c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ded2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ded30: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x1ded30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x1ded34: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1ded34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ded38: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x1ded38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x1ded3c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1ded3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ded40: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x1ded40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x1ded44: 0xffb500b8  sd          $s5, 0xB8($sp)
    ctx->pc = 0x1ded44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 21));
    // 0x1ded48: 0xffb700c8  sd          $s7, 0xC8($sp)
    ctx->pc = 0x1ded48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 23));
    // 0x1ded4c: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x1ded4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x1ded50: 0xffbf00d8  sd          $ra, 0xD8($sp)
    ctx->pc = 0x1ded50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 31));
    // 0x1ded54: 0xc077fee  jal         func_1DFFB8
    ctx->pc = 0x1DED54u;
    SET_GPR_U32(ctx, 31, 0x1DED5Cu);
    ctx->pc = 0x1DED58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DED54u;
    // 0x1ded58: 0x100b02d  daddu       $s6, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DFFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFFB8u, 0x1DED54u, 0x1DED5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DED5Cu;
label_1ded5c:
    // 0x1ded5c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DED5Cu;
    {
        const bool branch_taken_0x1ded5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DED60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DED5Cu;
        // 0x1ded60: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ded5c) {
            ctx->pc = 0x1DED6Cu;
            goto label_1ded6c;
        }
    }
    ctx->pc = 0x1DED64u;
    // 0x1ded64: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x1DED64u;
    {
        const bool branch_taken_0x1ded64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DED68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DED64u;
        // 0x1ded68: 0x8c6291c0  lw          $v0, -0x6E40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ded64) {
            ctx->pc = 0x1DF0E4u;
            goto label_1df0e4;
        }
    }
    ctx->pc = 0x1DED6Cu;
label_1ded6c:
    // 0x1ded6c: 0xc0f75c2  jal         func_3DD708
    ctx->pc = 0x1DED6Cu;
    SET_GPR_U32(ctx, 31, 0x1DED74u);
    ctx->pc = 0x1DED70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DED6Cu;
    // 0x1ded70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD708u, 0x1DED6Cu, 0x1DED74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DED74u;
label_1ded74:
    // 0x1ded74: 0x144000db  bnez        $v0, . + 4 + (0xDB << 2)
    ctx->pc = 0x1DED74u;
    {
        const bool branch_taken_0x1ded74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DED74u;
        // 0x1ded78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ded74) {
            ctx->pc = 0x1DF0E4u;
            goto label_1df0e4;
        }
    }
    ctx->pc = 0x1DED7Cu;
    // 0x1ded7c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ded7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ded80: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1ded80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1ded84: 0xc440d864  lwc1        $f0, -0x279C($v0)
    ctx->pc = 0x1ded84u;
    { uint32_t bits = FAST_READ32(0x45D864u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ded88: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x1ded88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x1ded8c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1ded8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1ded90: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x1ded90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x1ded94: 0xac500100  sw          $s0, 0x100($v0)
    ctx->pc = 0x1ded94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x490100u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x490100u, _value); } while (0);
    // 0x1ded98: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x1ded98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1ded9c: 0xe48091b0  swc1        $f0, -0x6E50($a0)
    ctx->pc = 0x1ded9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F91B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F91B0u, _value); } while (0); }
    // 0x1deda0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1deda0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1deda4: 0xacb191c4  sw          $s1, -0x6E3C($a1)
    ctx->pc = 0x1deda4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x3F91C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F91C4u, _value); } while (0);
    // 0x1deda8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1deda8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dedac: 0xac7291c8  sw          $s2, -0x6E38($v1)
    ctx->pc = 0x1dedacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x3F91C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F91C8u, _value); } while (0);
    // 0x1dedb0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1dedb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dedb4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1dedb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1dedb8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1dedb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1dedbc: 0xc0855ae  jal         func_2156B8
    ctx->pc = 0x1DEDBCu;
    SET_GPR_U32(ctx, 31, 0x1DEDC4u);
    ctx->pc = 0x1DEDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEDBCu;
    // 0x1dedc0: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2156B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2156B8u, 0x1DEDBCu, 0x1DEDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEDC4u;
label_1dedc4:
    // 0x1dedc4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1dedc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dedc8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1dedc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1dedcc: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DEDCCu;
    {
        const bool branch_taken_0x1dedcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DEDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEDCCu;
        // 0x1dedd0: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dedcc) {
            ctx->pc = 0x1DEDD8u;
            goto label_1dedd8;
        }
    }
    ctx->pc = 0x1DEDD4u;
    // 0x1dedd4: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1dedd4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1dedd8:
    // 0x1dedd8: 0x120000bb  beqz        $s0, . + 4 + (0xBB << 2)
    ctx->pc = 0x1DEDD8u;
    {
        const bool branch_taken_0x1dedd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEDD8u;
        // 0x1deddc: 0x3c110048  lui         $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dedd8) {
            ctx->pc = 0x1DF0C8u;
            goto label_1df0c8;
        }
    }
    ctx->pc = 0x1DEDE0u;
    // 0x1dede0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1dede0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1dede4: 0x3c140010  lui         $s4, 0x10
    ctx->pc = 0x1dede4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)16 << 16));
    // 0x1dede8: 0x8c55d9a4  lw          $s5, -0x265C($v0)
    ctx->pc = 0x1dede8u;
    SET_GPR_S32(ctx, 21, (int32_t)FAST_READ32(0x45D9A4u));
    // 0x1dedec: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x1dedecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
    // 0x1dedf0: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1dedf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x1dedf4: 0x247e7ee0  addiu       $fp, $v1, 0x7EE0
    ctx->pc = 0x1dedf4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 32480));
    // 0x1dedf8: 0x24572828  addiu       $s7, $v0, 0x2828
    ctx->pc = 0x1dedf8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 10280));
    // 0x1dedfc: 0x36940001  ori         $s4, $s4, 0x1
    ctx->pc = 0x1dedfcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)1);
    // 0x1dee00: 0x3c120048  lui         $s2, 0x48
    ctx->pc = 0x1dee00u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)72 << 16));
    // 0x1dee04: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x1dee04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_1dee08:
    // 0x1dee08: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x1dee08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x1dee0c: 0x8c640100  lw          $a0, 0x100($v1)
    ctx->pc = 0x1dee0cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x490100u));
    // 0x1dee10: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1dee10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1dee14: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1dee14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1dee18: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1DEE18u;
    {
        const bool branch_taken_0x1dee18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DEE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEE18u;
        // 0x1dee1c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dee18) {
            ctx->pc = 0x1DEE58u;
            goto label_1dee58;
        }
    }
    ctx->pc = 0x1DEE20u;
    // 0x1dee20: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1dee20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1dee24: 0x8c4391ac  lw          $v1, -0x6E54($v0)
    ctx->pc = 0x1dee24u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F91ACu));
    // 0x1dee28: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DEE28u;
    {
        const bool branch_taken_0x1dee28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dee28) {
            ctx->pc = 0x1DEE2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DEE28u;
            // 0x1dee2c: 0x8e0200c0  lw          $v0, 0xC0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DEE40u;
            goto label_1dee40;
        }
    }
    ctx->pc = 0x1DEE30u;
    // 0x1dee30: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x1dee30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1dee34: 0x1054001c  beq         $v0, $s4, . + 4 + (0x1C << 2)
    ctx->pc = 0x1DEE34u;
    {
        const bool branch_taken_0x1dee34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x1DEE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEE34u;
        // 0x1dee38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dee34) {
            ctx->pc = 0x1DEEA8u;
            goto label_1deea8;
        }
    }
    ctx->pc = 0x1DEE3Cu;
    // 0x1dee3c: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x1dee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_1dee40:
    // 0x1dee40: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1dee40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1dee44: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DEE44u;
    {
        const bool branch_taken_0x1dee44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEE44u;
        // 0x1dee48: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dee44) {
            ctx->pc = 0x1DEE60u;
            goto label_1dee60;
        }
    }
    ctx->pc = 0x1DEE4Cu;
    // 0x1dee4c: 0x8c6291c4  lw          $v0, -0x6E3C($v1)
    ctx->pc = 0x1dee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939076)));
    // 0x1dee50: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DEE50u;
    {
        const bool branch_taken_0x1dee50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DEE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEE50u;
        // 0x1dee54: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dee50) {
            ctx->pc = 0x1DEEA8u;
            goto label_1deea8;
        }
    }
    ctx->pc = 0x1DEE58u;
label_1dee58:
    // 0x1dee58: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1DEE58u;
    {
        const bool branch_taken_0x1dee58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEE58u;
        // 0x1dee5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dee58) {
            ctx->pc = 0x1DEEA8u;
            goto label_1deea8;
        }
    }
    ctx->pc = 0x1DEE60u;
label_1dee60:
    // 0x1dee60: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1dee60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1dee64: 0x8c6291c8  lw          $v0, -0x6E38($v1)
    ctx->pc = 0x1dee64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F91C8u));
    // 0x1dee68: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1DEE68u;
    {
        const bool branch_taken_0x1dee68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEE68u;
        // 0x1dee6c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dee68) {
            ctx->pc = 0x1DEE58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dee58;
        }
    }
    ctx->pc = 0x1DEE70u;
    // 0x1dee70: 0x8c4391b8  lw          $v1, -0x6E48($v0)
    ctx->pc = 0x1dee70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939064)));
    // 0x1dee74: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1DEE74u;
    {
        const bool branch_taken_0x1dee74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEE74u;
        // 0x1dee78: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dee74) {
            ctx->pc = 0x1DEEA8u;
            goto label_1deea8;
        }
    }
    ctx->pc = 0x1DEE7Cu;
    // 0x1dee7c: 0x84a20054  lh          $v0, 0x54($a1)
    ctx->pc = 0x1dee7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x1dee80: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1dee80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1dee84: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x1dee84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x1dee88: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DEE88u;
    {
        const bool branch_taken_0x1dee88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dee88) {
            ctx->pc = 0x1DEEA8u;
            goto label_1deea8;
        }
    }
    ctx->pc = 0x1DEE90u;
    // 0x1dee90: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1dee90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dee94: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x1dee94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x1dee98: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1dee98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dee9c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DEE9Cu;
    {
        const bool branch_taken_0x1dee9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEE9Cu;
        // 0x1deea0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dee9c) {
            ctx->pc = 0x1DEEA8u;
            goto label_1deea8;
        }
    }
    ctx->pc = 0x1DEEA4u;
    // 0x1deea4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1deea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1deea8:
    // 0x1deea8: 0x1080007d  beqz        $a0, . + 4 + (0x7D << 2)
    ctx->pc = 0x1DEEA8u;
    {
        const bool branch_taken_0x1deea8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEEA8u;
        // 0x1deeac: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deea8) {
            ctx->pc = 0x1DF0A0u;
            goto label_1df0a0;
        }
    }
    ctx->pc = 0x1DEEB0u;
    // 0x1deeb0: 0xc44091b0  lwc1        $f0, -0x6E50($v0)
    ctx->pc = 0x1deeb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294939056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1deeb4: 0x12c0006c  beqz        $s6, . + 4 + (0x6C << 2)
    ctx->pc = 0x1DEEB4u;
    {
        const bool branch_taken_0x1deeb4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEEB4u;
        // 0x1deeb8: 0xe7a00080  swc1        $f0, 0x80($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deeb4) {
            ctx->pc = 0x1DF068u;
            goto label_1df068;
        }
    }
    ctx->pc = 0x1DEEBCu;
    // 0x1deebc: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x1deebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1deec0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1deec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1deec4: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x1deec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x1deec8: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x1DEEC8u;
    {
        const bool branch_taken_0x1deec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1deec8) {
            ctx->pc = 0x1DEECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DEEC8u;
            // 0x1deecc: 0x8e0500c4  lw          $a1, 0xC4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DEF6Cu;
            goto label_1def6c;
        }
    }
    ctx->pc = 0x1DEED0u;
    // 0x1deed0: 0xc06b600  jal         func_1AD800
    ctx->pc = 0x1DEED0u;
    SET_GPR_U32(ctx, 31, 0x1DEED8u);
    ctx->pc = 0x1DEED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEED0u;
    // 0x1deed4: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD800u, 0x1DEED0u, 0x1DEED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEED8u;
label_1deed8:
    // 0x1deed8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1DEED8u;
    {
        const bool branch_taken_0x1deed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEED8u;
        // 0x1deedc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deed8) {
            ctx->pc = 0x1DEF68u;
            goto label_1def68;
        }
    }
    ctx->pc = 0x1DEEE0u;
    // 0x1deee0: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x1deee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1deee4: 0x93a90030  lbu         $t1, 0x30($sp)
    ctx->pc = 0x1deee4u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1deee8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1deee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1deeec: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1deeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1deef0: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x1deef0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1deef4: 0x8e2a2b1c  lw          $t2, 0x2B1C($s1)
    ctx->pc = 0x1deef4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11036)));
    // 0x1deef8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1deef8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1deefc: 0xa3a90020  sb          $t1, 0x20($sp)
    ctx->pc = 0x1deefcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 9));
    // 0x1def00: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x1def00u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x1def04: 0x8e422b20  lw          $v0, 0x2B20($s2)
    ctx->pc = 0x1def04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11040)));
    // 0x1def08: 0x24c80040  addiu       $t0, $a2, 0x40
    ctx->pc = 0x1def08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x1def0c: 0x78c30010  lq          $v1, 0x10($a2)
    ctx->pc = 0x1def0cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1def10: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x1def10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x1def14: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x1def14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x1def18: 0x78c20020  lq          $v0, 0x20($a2)
    ctx->pc = 0x1def18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1def1c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x1def1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x1def20: 0xc4c00030  lwc1        $f0, 0x30($a2)
    ctx->pc = 0x1def20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1def24: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1def24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1def28: 0xc4c10040  lwc1        $f1, 0x40($a2)
    ctx->pc = 0x1def28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1def2c: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x1def2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1def30: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x1def30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1def34: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1def34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1def38: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x1def38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1def3c: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x1def3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1def40: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x1def40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1def44: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1def44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1def48: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x1def48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x1def4c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1def4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1def50: 0x78c20070  lq          $v0, 0x70($a2)
    ctx->pc = 0x1def50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 112)));
    // 0x1def54: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1def54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x1def58: 0xc0789d6  jal         func_1E2758
    ctx->pc = 0x1DEF58u;
    SET_GPR_U32(ctx, 31, 0x1DEF60u);
    ctx->pc = 0x1DEF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEF58u;
    // 0x1def5c: 0x8d460000  lw          $a2, 0x0($t2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2758u, 0x1DEF58u, 0x1DEF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEF60u;
label_1def60:
    // 0x1def60: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1DEF60u;
    {
        const bool branch_taken_0x1def60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1def60) {
            ctx->pc = 0x1DEF94u;
            goto label_1def94;
        }
    }
    ctx->pc = 0x1DEF68u;
label_1def68:
    // 0x1def68: 0x8e0500c4  lw          $a1, 0xC4($s0)
    ctx->pc = 0x1def68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_1def6c:
    // 0x1def6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1def6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1def70: 0x8e222b1c  lw          $v0, 0x2B1C($s1)
    ctx->pc = 0x1def70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11036)));
    // 0x1def74: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x1def74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1def78: 0x8ca60014  lw          $a2, 0x14($a1)
    ctx->pc = 0x1def78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1def7c: 0x8e432b20  lw          $v1, 0x2B20($s2)
    ctx->pc = 0x1def7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11040)));
    // 0x1def80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1def80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1def84: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1def84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1def88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1def88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1def8c: 0xc0789d6  jal         func_1E2758
    ctx->pc = 0x1DEF8Cu;
    SET_GPR_U32(ctx, 31, 0x1DEF94u);
    ctx->pc = 0x1DEF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEF8Cu;
    // 0x1def90: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2758u, 0x1DEF8Cu, 0x1DEF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEF94u;
label_1def94:
    // 0x1def94: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1DEF94u;
    {
        const bool branch_taken_0x1def94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEF94u;
        // 0x1def98: 0x8e242b1c  lw          $a0, 0x2B1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1def94) {
            ctx->pc = 0x1DF0A0u;
            goto label_1df0a0;
        }
    }
    ctx->pc = 0x1DEF9Cu;
    // 0x1def9c: 0x95102b  sltu        $v0, $a0, $s5
    ctx->pc = 0x1def9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x1defa0: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x1DEFA0u;
    {
        const bool branch_taken_0x1defa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEFA0u;
        // 0x1defa4: 0x8e432b20  lw          $v1, 0x2B20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1defa0) {
            ctx->pc = 0x1DF0A0u;
            goto label_1df0a0;
        }
    }
    ctx->pc = 0x1DEFA8u;
    // 0x1defa8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1defa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1defac: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1defacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1defb0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1defb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1defb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1defb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1defb8: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x1defb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1defbc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1defbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1defc0: 0xac730024  sw          $s3, 0x24($v1)
    ctx->pc = 0x1defc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 19));
    // 0x1defc4: 0x8e222b1c  lw          $v0, 0x2B1C($s1)
    ctx->pc = 0x1defc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11036)));
    // 0x1defc8: 0x8e442b20  lw          $a0, 0x2B20($s2)
    ctx->pc = 0x1defc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11040)));
    // 0x1defcc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1defccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1defd0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1defd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1defd4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1defd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1defd8: 0xac650028  sw          $a1, 0x28($v1)
    ctx->pc = 0x1defd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 5));
    // 0x1defdc: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x1defdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1defe0: 0x8e222b1c  lw          $v0, 0x2B1C($s1)
    ctx->pc = 0x1defe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11036)));
    // 0x1defe4: 0x8e432b20  lw          $v1, 0x2B20($s2)
    ctx->pc = 0x1defe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11040)));
    // 0x1defe8: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1defe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1defec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1defecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1deff0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1deff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1deff4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1deff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1deff8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1deff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1deffc: 0xac64002c  sw          $a0, 0x2C($v1)
    ctx->pc = 0x1deffcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 4));
    // 0x1df000: 0x8e222b1c  lw          $v0, 0x2B1C($s1)
    ctx->pc = 0x1df000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11036)));
    // 0x1df004: 0x8e442b20  lw          $a0, 0x2B20($s2)
    ctx->pc = 0x1df004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11040)));
    // 0x1df008: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1df008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1df00c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1df00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1df010: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1df010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1df014: 0xac660030  sw          $a2, 0x30($v1)
    ctx->pc = 0x1df014u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 6));
    // 0x1df018: 0x8e222b1c  lw          $v0, 0x2B1C($s1)
    ctx->pc = 0x1df018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11036)));
    // 0x1df01c: 0x8e442b20  lw          $a0, 0x2B20($s2)
    ctx->pc = 0x1df01cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11040)));
    // 0x1df020: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1df020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1df024: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1df024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df028: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1df028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1df02c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1df02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1df030: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1df030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1df034: 0x8e222b1c  lw          $v0, 0x2B1C($s1)
    ctx->pc = 0x1df034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11036)));
    // 0x1df038: 0x8e442b20  lw          $a0, 0x2B20($s2)
    ctx->pc = 0x1df038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11040)));
    // 0x1df03c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1df03cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1df040: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1df040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1df044: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1df044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1df048: 0xac700034  sw          $s0, 0x34($v1)
    ctx->pc = 0x1df048u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 16));
    // 0x1df04c: 0x8e222b1c  lw          $v0, 0x2B1C($s1)
    ctx->pc = 0x1df04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11036)));
    // 0x1df050: 0x8e442b20  lw          $a0, 0x2B20($s2)
    ctx->pc = 0x1df050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11040)));
    // 0x1df054: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1df054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1df058: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1df058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1df05c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1df05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1df060: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1DF060u;
    {
        const bool branch_taken_0x1df060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF060u;
        // 0x1df064: 0xac670038  sw          $a3, 0x38($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df060) {
            ctx->pc = 0x1DF094u;
            goto label_1df094;
        }
    }
    ctx->pc = 0x1DF068u;
label_1df068:
    // 0x1df068: 0x8e222b1c  lw          $v0, 0x2B1C($s1)
    ctx->pc = 0x1df068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11036)));
    // 0x1df06c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1df06cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df070: 0x8e432b20  lw          $v1, 0x2B20($s2)
    ctx->pc = 0x1df070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11040)));
    // 0x1df074: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1df074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df078: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1df078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1df07c: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x1df07cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1df080: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1df080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1df084: 0xc0775b8  jal         func_1DD6E0
    ctx->pc = 0x1DF084u;
    SET_GPR_U32(ctx, 31, 0x1DF08Cu);
    ctx->pc = 0x1DF088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF084u;
    // 0x1df088: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD6E0u, 0x1DF084u, 0x1DF08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF08Cu;
label_1df08c:
    // 0x1df08c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DF08Cu;
    {
        const bool branch_taken_0x1df08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF08Cu;
        // 0x1df090: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df08c) {
            ctx->pc = 0x1DF0A4u;
            goto label_1df0a4;
        }
    }
    ctx->pc = 0x1DF094u;
label_1df094:
    // 0x1df094: 0x8e222b1c  lw          $v0, 0x2B1C($s1)
    ctx->pc = 0x1df094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11036)));
    // 0x1df098: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1df098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1df09c: 0xae222b1c  sw          $v0, 0x2B1C($s1)
    ctx->pc = 0x1df09cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11036), GPR_U32(ctx, 2));
label_1df0a0:
    // 0x1df0a0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1df0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1df0a4:
    // 0x1df0a4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1df0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df0a8: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DF0A8u;
    {
        const bool branch_taken_0x1df0a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1DF0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF0A8u;
        // 0x1df0ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df0a8) {
            ctx->pc = 0x1DF0C0u;
            goto label_1df0c0;
        }
    }
    ctx->pc = 0x1DF0B0u;
    // 0x1df0b0: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x1df0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1df0b4: 0x10440002  beq         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DF0B4u;
    {
        const bool branch_taken_0x1df0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1DF0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF0B4u;
        // 0x1df0b8: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df0b4) {
            ctx->pc = 0x1DF0C0u;
            goto label_1df0c0;
        }
    }
    ctx->pc = 0x1DF0BCu;
    // 0x1df0bc: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x1df0bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1df0c0:
    // 0x1df0c0: 0x5600ff51  bnel        $s0, $zero, . + 4 + (-0xAF << 2)
    ctx->pc = 0x1DF0C0u;
    {
        const bool branch_taken_0x1df0c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df0c0) {
            ctx->pc = 0x1DF0C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF0C0u;
            // 0x1df0c4: 0x8e0200b8  lw          $v0, 0xB8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DEE08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dee08;
        }
    }
    ctx->pc = 0x1DF0C8u;
label_1df0c8:
    // 0x1df0c8: 0x8e222b1c  lw          $v0, 0x2B1C($s1)
    ctx->pc = 0x1df0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11036)));
    // 0x1df0cc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1df0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df0d0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DF0D0u;
    {
        const bool branch_taken_0x1df0d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF0D0u;
        // 0x1df0d4: 0x2802b  sltu        $s0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df0d0) {
            ctx->pc = 0x1DF0E0u;
            goto label_1df0e0;
        }
    }
    ctx->pc = 0x1DF0D8u;
    // 0x1df0d8: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1DF0D8u;
    SET_GPR_U32(ctx, 31, 0x1DF0E0u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1DF0D8u, 0x1DF0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF0E0u;
label_1df0e0:
    // 0x1df0e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1df0e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1df0e4:
    // 0x1df0e4: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x1df0e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1df0e8: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x1df0e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1df0ec: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x1df0ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1df0f0: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x1df0f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1df0f4: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x1df0f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1df0f8: 0xdfb500b8  ld          $s5, 0xB8($sp)
    ctx->pc = 0x1df0f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1df0fc: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x1df0fcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1df100: 0xdfb700c8  ld          $s7, 0xC8($sp)
    ctx->pc = 0x1df100u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1df104: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x1df104u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1df108: 0xdfbf00d8  ld          $ra, 0xD8($sp)
    ctx->pc = 0x1df108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1df10c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF10Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF10Cu;
        // 0x1df110: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF10Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF114u;
    // 0x1df114: 0x0  nop
    ctx->pc = 0x1df114u;
    // NOP
    ctx->pc = 0x1df118u;
}
