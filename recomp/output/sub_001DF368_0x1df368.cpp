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

// Function: sub_001DF368
// Address: 0x1df368 - 0x1df638
void sub_001DF368_0x1df368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DF368_0x1df368");
#endif

    switch (ctx->pc) {
        case 0x1df3acu: goto label_1df3ac;
        case 0x1df3c4u: goto label_1df3c4;
        case 0x1df420u: goto label_1df420;
        case 0x1df458u: goto label_1df458;
        case 0x1df4a4u: goto label_1df4a4;
        case 0x1df520u: goto label_1df520;
        case 0x1df5a8u: goto label_1df5a8;
        case 0x1df5b8u: goto label_1df5b8;
        case 0x1df600u: goto label_1df600;
        default: break;
    }

    ctx->pc = 0x1df368u;

    // 0x1df368: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1df368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1df36c: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x1df36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x1df370: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x1df370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x1df374: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1df374u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df378: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x1df378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x1df37c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1df37cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df380: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x1df380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x1df384: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1df384u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df388: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x1df388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x1df38c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1df38cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df390: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x1df390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
    // 0x1df394: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x1df394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x1df398: 0xffb700b8  sd          $s7, 0xB8($sp)
    ctx->pc = 0x1df398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 23));
    // 0x1df39c: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x1df39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x1df3a0: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x1df3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
    // 0x1df3a4: 0xc077fee  jal         func_1DFFB8
    ctx->pc = 0x1DF3A4u;
    SET_GPR_U32(ctx, 31, 0x1DF3ACu);
    ctx->pc = 0x1DF3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF3A4u;
    // 0x1df3a8: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DFFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFFB8u, 0x1DF3A4u, 0x1DF3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF3ACu;
label_1df3ac:
    // 0x1df3ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DF3ACu;
    {
        const bool branch_taken_0x1df3ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF3ACu;
        // 0x1df3b0: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df3ac) {
            ctx->pc = 0x1DF3BCu;
            goto label_1df3bc;
        }
    }
    ctx->pc = 0x1DF3B4u;
    // 0x1df3b4: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x1DF3B4u;
    {
        const bool branch_taken_0x1df3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF3B4u;
        // 0x1df3b8: 0x8c6291c0  lw          $v0, -0x6E40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df3b4) {
            ctx->pc = 0x1DF604u;
            goto label_1df604;
        }
    }
    ctx->pc = 0x1DF3BCu;
label_1df3bc:
    // 0x1df3bc: 0xc0f75c2  jal         func_3DD708
    ctx->pc = 0x1DF3BCu;
    SET_GPR_U32(ctx, 31, 0x1DF3C4u);
    ctx->pc = 0x1DF3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF3BCu;
    // 0x1df3c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD708u, 0x1DF3BCu, 0x1DF3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF3C4u;
label_1df3c4:
    // 0x1df3c4: 0x1440008f  bnez        $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x1DF3C4u;
    {
        const bool branch_taken_0x1df3c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF3C4u;
        // 0x1df3c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df3c4) {
            ctx->pc = 0x1DF604u;
            goto label_1df604;
        }
    }
    ctx->pc = 0x1DF3CCu;
    // 0x1df3cc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1df3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1df3d0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1df3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1df3d4: 0xc440d86c  lwc1        $f0, -0x2794($v0)
    ctx->pc = 0x1df3d4u;
    { uint32_t bits = FAST_READ32(0x45D86Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df3d8: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x1df3d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x1df3dc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1df3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1df3e0: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x1df3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
    // 0x1df3e4: 0xacb00100  sw          $s0, 0x100($a1)
    ctx->pc = 0x1df3e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x490100u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x490100u, _value); } while (0);
    // 0x1df3e8: 0x27a70008  addiu       $a3, $sp, 0x8
    ctx->pc = 0x1df3e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1df3ec: 0xac7191c4  sw          $s1, -0x6E3C($v1)
    ctx->pc = 0x1df3ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x3F91C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F91C4u, _value); } while (0);
    // 0x1df3f0: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x1df3f0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df3f4: 0xe44091b0  swc1        $f0, -0x6E50($v0)
    ctx->pc = 0x1df3f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F91B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F91B0u, _value); } while (0); }
    // 0x1df3f8: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1df3f8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df3fc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1df3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1df400: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1df400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df404: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1df404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1df408: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1df408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df40c: 0xacd391c8  sw          $s3, -0x6E38($a2)
    ctx->pc = 0x1df40cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x3F91C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F91C8u, _value); } while (0);
    // 0x1df410: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1df410u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df414: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x1df414u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x1df418: 0xc0855ae  jal         func_2156B8
    ctx->pc = 0x1DF418u;
    SET_GPR_U32(ctx, 31, 0x1DF420u);
    ctx->pc = 0x1DF41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF418u;
    // 0x1df41c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2156B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2156B8u, 0x1DF418u, 0x1DF420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF420u;
label_1df420:
    // 0x1df420: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1df420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df424: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1df424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1df428: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DF428u;
    {
        const bool branch_taken_0x1df428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DF42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF428u;
        // 0x1df42c: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df428) {
            ctx->pc = 0x1DF434u;
            goto label_1df434;
        }
    }
    ctx->pc = 0x1DF430u;
    // 0x1df430: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1df430u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1df434:
    // 0x1df434: 0x1200006d  beqz        $s0, . + 4 + (0x6D << 2)
    ctx->pc = 0x1DF434u;
    {
        const bool branch_taken_0x1df434 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF434u;
        // 0x1df438: 0x3c130010  lui         $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df434) {
            ctx->pc = 0x1DF5ECu;
            goto label_1df5ec;
        }
    }
    ctx->pc = 0x1DF43Cu;
    // 0x1df43c: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x1df43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x1df440: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x1df440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x1df444: 0x24567ee0  addiu       $s6, $v0, 0x7EE0
    ctx->pc = 0x1df444u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 32480));
    // 0x1df448: 0x24752828  addiu       $s5, $v1, 0x2828
    ctx->pc = 0x1df448u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 10280));
    // 0x1df44c: 0x36730001  ori         $s3, $s3, 0x1
    ctx->pc = 0x1df44cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
    // 0x1df450: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x1df450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x1df454: 0x0  nop
    ctx->pc = 0x1df454u;
    // NOP
label_1df458:
    // 0x1df458: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x1df458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x1df45c: 0x8c640100  lw          $a0, 0x100($v1)
    ctx->pc = 0x1df45cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x490100u));
    // 0x1df460: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1df460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1df464: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1df464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1df468: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1DF468u;
    {
        const bool branch_taken_0x1df468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF468u;
        // 0x1df46c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df468) {
            ctx->pc = 0x1DF4A4u;
            goto label_1df4a4;
        }
    }
    ctx->pc = 0x1DF470u;
    // 0x1df470: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1df470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1df474: 0x8c4391ac  lw          $v1, -0x6E54($v0)
    ctx->pc = 0x1df474u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F91ACu));
    // 0x1df478: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DF478u;
    {
        const bool branch_taken_0x1df478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df478) {
            ctx->pc = 0x1DF47Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF478u;
            // 0x1df47c: 0x8e0200c0  lw          $v0, 0xC0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF490u;
            goto label_1df490;
        }
    }
    ctx->pc = 0x1DF480u;
    // 0x1df480: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x1df480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1df484: 0x1053001b  beq         $v0, $s3, . + 4 + (0x1B << 2)
    ctx->pc = 0x1DF484u;
    {
        const bool branch_taken_0x1df484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x1DF488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF484u;
        // 0x1df488: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df484) {
            ctx->pc = 0x1DF4F4u;
            goto label_1df4f4;
        }
    }
    ctx->pc = 0x1DF48Cu;
    // 0x1df48c: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x1df48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_1df490:
    // 0x1df490: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1df490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1df494: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DF494u;
    {
        const bool branch_taken_0x1df494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF494u;
        // 0x1df498: 0x8fc291c4  lw          $v0, -0x6E3C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294939076)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df494) {
            ctx->pc = 0x1DF4ACu;
            goto label_1df4ac;
        }
    }
    ctx->pc = 0x1DF49Cu;
    // 0x1df49c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DF49Cu;
    {
        const bool branch_taken_0x1df49c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF49Cu;
        // 0x1df4a0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df49c) {
            ctx->pc = 0x1DF4F4u;
            goto label_1df4f4;
        }
    }
    ctx->pc = 0x1DF4A4u;
label_1df4a4:
    // 0x1df4a4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1DF4A4u;
    {
        const bool branch_taken_0x1df4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF4A4u;
        // 0x1df4a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df4a4) {
            ctx->pc = 0x1DF4F4u;
            goto label_1df4f4;
        }
    }
    ctx->pc = 0x1DF4ACu;
label_1df4ac:
    // 0x1df4ac: 0x8ee291c8  lw          $v0, -0x6E38($s7)
    ctx->pc = 0x1df4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294939080)));
    // 0x1df4b0: 0x0  nop
    ctx->pc = 0x1df4b0u;
    // NOP
    // 0x1df4b4: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1DF4B4u;
    {
        const bool branch_taken_0x1df4b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF4B4u;
        // 0x1df4b8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df4b4) {
            ctx->pc = 0x1DF4A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1df4a4;
        }
    }
    ctx->pc = 0x1DF4BCu;
    // 0x1df4bc: 0x8c4391b8  lw          $v1, -0x6E48($v0)
    ctx->pc = 0x1df4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939064)));
    // 0x1df4c0: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1DF4C0u;
    {
        const bool branch_taken_0x1df4c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF4C0u;
        // 0x1df4c4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df4c0) {
            ctx->pc = 0x1DF4F4u;
            goto label_1df4f4;
        }
    }
    ctx->pc = 0x1DF4C8u;
    // 0x1df4c8: 0x84a20054  lh          $v0, 0x54($a1)
    ctx->pc = 0x1df4c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x1df4cc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1df4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1df4d0: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1df4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1df4d4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DF4D4u;
    {
        const bool branch_taken_0x1df4d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df4d4) {
            ctx->pc = 0x1DF4F4u;
            goto label_1df4f4;
        }
    }
    ctx->pc = 0x1DF4DCu;
    // 0x1df4dc: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1df4dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1df4e0: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1df4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1df4e4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1df4e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1df4e8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DF4E8u;
    {
        const bool branch_taken_0x1df4e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF4E8u;
        // 0x1df4ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df4e8) {
            ctx->pc = 0x1DF4F4u;
            goto label_1df4f4;
        }
    }
    ctx->pc = 0x1DF4F0u;
    // 0x1df4f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1df4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1df4f4:
    // 0x1df4f4: 0x50800034  beql        $a0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x1DF4F4u;
    {
        const bool branch_taken_0x1df4f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df4f4) {
            ctx->pc = 0x1DF4F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF4F4u;
            // 0x1df4f8: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF5C8u;
            goto label_1df5c8;
        }
    }
    ctx->pc = 0x1DF4FCu;
    // 0x1df4fc: 0x1280002c  beqz        $s4, . + 4 + (0x2C << 2)
    ctx->pc = 0x1DF4FCu;
    {
        const bool branch_taken_0x1df4fc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF4FCu;
        // 0x1df500: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df4fc) {
            ctx->pc = 0x1DF5B0u;
            goto label_1df5b0;
        }
    }
    ctx->pc = 0x1DF504u;
    // 0x1df504: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x1df504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1df508: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1df508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1df50c: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x1df50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x1df510: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x1DF510u;
    {
        const bool branch_taken_0x1df510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df510) {
            ctx->pc = 0x1DF514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF510u;
            // 0x1df514: 0x8e0300c4  lw          $v1, 0xC4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF594u;
            goto label_1df594;
        }
    }
    ctx->pc = 0x1DF518u;
    // 0x1df518: 0xc06b600  jal         func_1AD800
    ctx->pc = 0x1DF518u;
    SET_GPR_U32(ctx, 31, 0x1DF520u);
    ctx->pc = 0x1DF51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF518u;
    // 0x1df51c: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD800u, 0x1DF518u, 0x1DF520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF520u;
label_1df520:
    // 0x1df520: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1DF520u;
    {
        const bool branch_taken_0x1df520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF520u;
        // 0x1df524: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df520) {
            ctx->pc = 0x1DF590u;
            goto label_1df590;
        }
    }
    ctx->pc = 0x1DF528u;
    // 0x1df528: 0x8e0700c4  lw          $a3, 0xC4($s0)
    ctx->pc = 0x1df528u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1df52c: 0x93a30030  lbu         $v1, 0x30($sp)
    ctx->pc = 0x1df52cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1df530: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1df530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1df534: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x1df534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1df538: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1df538u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1df53c: 0xa3a30020  sb          $v1, 0x20($sp)
    ctx->pc = 0x1df53cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x1df540: 0x24c70040  addiu       $a3, $a2, 0x40
    ctx->pc = 0x1df540u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x1df544: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x1df544u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1df548: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1df548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x1df54c: 0x78c30020  lq          $v1, 0x20($a2)
    ctx->pc = 0x1df54cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1df550: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x1df550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x1df554: 0xc4c00030  lwc1        $f0, 0x30($a2)
    ctx->pc = 0x1df554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df558: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1df558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1df55c: 0xc4c10040  lwc1        $f1, 0x40($a2)
    ctx->pc = 0x1df55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1df560: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x1df560u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1df564: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x1df564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df568: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1df568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1df56c: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x1df56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1df570: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x1df570u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1df574: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x1df574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df578: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1df578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1df57c: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x1df57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x1df580: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1df580u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1df584: 0x78c20070  lq          $v0, 0x70($a2)
    ctx->pc = 0x1df584u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 112)));
    // 0x1df588: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1DF588u;
    {
        const bool branch_taken_0x1df588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF588u;
        // 0x1df58c: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df588) {
            ctx->pc = 0x1DF5A0u;
            goto label_1df5a0;
        }
    }
    ctx->pc = 0x1DF590u;
label_1df590:
    // 0x1df590: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x1df590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_1df594:
    // 0x1df594: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1df594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df598: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1df598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1df59c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1df59cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1df5a0:
    // 0x1df5a0: 0xc078668  jal         func_1E19A0
    ctx->pc = 0x1DF5A0u;
    SET_GPR_U32(ctx, 31, 0x1DF5A8u);
    ctx->pc = 0x1E19A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19A0u, 0x1DF5A0u, 0x1DF5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF5A8u;
label_1df5a8:
    // 0x1df5a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1DF5A8u;
    {
        const bool branch_taken_0x1df5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF5A8u;
        // 0x1df5ac: 0x2882b  sltu        $s1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df5a8) {
            ctx->pc = 0x1DF5C0u;
            goto label_1df5c0;
        }
    }
    ctx->pc = 0x1DF5B0u;
label_1df5b0:
    // 0x1df5b0: 0xc07762c  jal         func_1DD8B0
    ctx->pc = 0x1DF5B0u;
    SET_GPR_U32(ctx, 31, 0x1DF5B8u);
    ctx->pc = 0x1DF5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF5B0u;
    // 0x1df5b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD8B0u, 0x1DF5B0u, 0x1DF5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF5B8u;
label_1df5b8:
    // 0x1df5b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1df5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df5bc: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x1df5bcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_1df5c0:
    // 0x1df5c0: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1DF5C0u;
    {
        const bool branch_taken_0x1df5c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF5C0u;
        // 0x1df5c4: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df5c0) {
            ctx->pc = 0x1DF5ECu;
            goto label_1df5ec;
        }
    }
    ctx->pc = 0x1DF5C8u;
label_1df5c8:
    // 0x1df5c8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1df5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df5cc: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DF5CCu;
    {
        const bool branch_taken_0x1df5cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1DF5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF5CCu;
        // 0x1df5d0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df5cc) {
            ctx->pc = 0x1DF5E4u;
            goto label_1df5e4;
        }
    }
    ctx->pc = 0x1DF5D4u;
    // 0x1df5d4: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x1df5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1df5d8: 0x10440002  beq         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DF5D8u;
    {
        const bool branch_taken_0x1df5d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1DF5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF5D8u;
        // 0x1df5dc: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df5d8) {
            ctx->pc = 0x1DF5E4u;
            goto label_1df5e4;
        }
    }
    ctx->pc = 0x1DF5E0u;
    // 0x1df5e0: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x1df5e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1df5e4:
    // 0x1df5e4: 0x5600ff9c  bnel        $s0, $zero, . + 4 + (-0x64 << 2)
    ctx->pc = 0x1DF5E4u;
    {
        const bool branch_taken_0x1df5e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df5e4) {
            ctx->pc = 0x1DF5E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF5E4u;
            // 0x1df5e8: 0x8e0200b8  lw          $v0, 0xB8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1df458;
        }
    }
    ctx->pc = 0x1DF5ECu;
label_1df5ec:
    // 0x1df5ec: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1df5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df5f0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DF5F0u;
    {
        const bool branch_taken_0x1df5f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF5F0u;
        // 0x1df5f4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df5f0) {
            ctx->pc = 0x1DF604u;
            goto label_1df604;
        }
    }
    ctx->pc = 0x1DF5F8u;
    // 0x1df5f8: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1DF5F8u;
    SET_GPR_U32(ctx, 31, 0x1DF600u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1DF5F8u, 0x1DF600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF600u;
label_1df600:
    // 0x1df600: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1df600u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1df604:
    // 0x1df604: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x1df604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1df608: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x1df608u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1df60c: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x1df60cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1df610: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x1df610u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1df614: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x1df614u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1df618: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x1df618u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1df61c: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x1df61cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1df620: 0xdfb700b8  ld          $s7, 0xB8($sp)
    ctx->pc = 0x1df620u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1df624: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x1df624u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1df628: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x1df628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1df62c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF62Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF62Cu;
        // 0x1df630: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF62Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF634u;
    // 0x1df634: 0x0  nop
    ctx->pc = 0x1df634u;
    // NOP
    ctx->pc = 0x1df638u;
}
