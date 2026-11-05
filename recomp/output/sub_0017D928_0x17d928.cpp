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

// Function: sub_0017D928
// Address: 0x17d928 - 0x17dab0
void sub_0017D928_0x17d928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D928_0x17d928");
#endif

    switch (ctx->pc) {
        case 0x17d980u: goto label_17d980;
        case 0x17d9a4u: goto label_17d9a4;
        case 0x17d9e4u: goto label_17d9e4;
        case 0x17d9ecu: goto label_17d9ec;
        case 0x17d9f4u: goto label_17d9f4;
        case 0x17d9fcu: goto label_17d9fc;
        case 0x17da14u: goto label_17da14;
        case 0x17da20u: goto label_17da20;
        case 0x17da34u: goto label_17da34;
        case 0x17da64u: goto label_17da64;
        default: break;
    }

    ctx->pc = 0x17d928u;

    // 0x17d928: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17d928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17d92c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x17d92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17d930: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x17d930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17d934: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17d934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d938: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x17d938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x17d93c: 0x50400058  beql        $v0, $zero, . + 4 + (0x58 << 2)
    ctx->pc = 0x17D93Cu;
    {
        const bool branch_taken_0x17d93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d93c) {
            ctx->pc = 0x17D940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17D93Cu;
            // 0x17d940: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17DAA0u;
            goto label_17daa0;
        }
    }
    ctx->pc = 0x17D944u;
    // 0x17d944: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x17d944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x17d948: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x17D948u;
    {
        const bool branch_taken_0x17d948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D948u;
        // 0x17d94c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d948) {
            ctx->pc = 0x17D9ACu;
            goto label_17d9ac;
        }
    }
    ctx->pc = 0x17D950u;
    // 0x17d950: 0x8e0300b4  lw          $v1, 0xB4($s0)
    ctx->pc = 0x17d950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x17d954: 0x92020050  lbu         $v0, 0x50($s0)
    ctx->pc = 0x17d954u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x17d958: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17D958u;
    {
        const bool branch_taken_0x17d958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D958u;
        // 0x17d95c: 0x2c630001  sltiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d958) {
            ctx->pc = 0x17D970u;
            goto label_17d970;
        }
    }
    ctx->pc = 0x17D960u;
    // 0x17d960: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D960u;
    {
        const bool branch_taken_0x17d960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d960) {
            ctx->pc = 0x17D970u;
            goto label_17d970;
        }
    }
    ctx->pc = 0x17D968u;
    // 0x17d968: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x17d968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x17d96c: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x17d96cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_17d970:
    // 0x17d970: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D970u;
    {
        const bool branch_taken_0x17d970 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d970) {
            ctx->pc = 0x17D974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17D970u;
            // 0x17d974: 0x8e0500b4  lw          $a1, 0xB4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17D98Cu;
            goto label_17d98c;
        }
    }
    ctx->pc = 0x17D978u;
    // 0x17d978: 0xc05f5dc  jal         func_17D770
    ctx->pc = 0x17D978u;
    SET_GPR_U32(ctx, 31, 0x17D980u);
    ctx->pc = 0x17D97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D978u;
    // 0x17d97c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D770u, 0x17D978u, 0x17D980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D980u;
label_17d980:
    // 0x17d980: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x17d980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x17d984: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x17D984u;
    {
        const bool branch_taken_0x17d984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D984u;
        // 0x17d988: 0xa2000050  sb          $zero, 0x50($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 80), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d984) {
            ctx->pc = 0x17D9ACu;
            goto label_17d9ac;
        }
    }
    ctx->pc = 0x17D98Cu;
label_17d98c:
    // 0x17d98c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17d98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d990: 0x8e0600b8  lw          $a2, 0xB8($s0)
    ctx->pc = 0x17d990u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x17d994: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17d994u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d998: 0x8e070070  lw          $a3, 0x70($s0)
    ctx->pc = 0x17d998u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x17d99c: 0xc05fa24  jal         func_17E890
    ctx->pc = 0x17D99Cu;
    SET_GPR_U32(ctx, 31, 0x17D9A4u);
    ctx->pc = 0x17D9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D99Cu;
    // 0x17d9a0: 0x8e080074  lw          $t0, 0x74($s0) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E890u, 0x17D99Cu, 0x17D9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D9A4u;
label_17d9a4:
    // 0x17d9a4: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x17D9A4u;
    {
        const bool branch_taken_0x17d9a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d9a4) {
            ctx->pc = 0x17D9A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17D9A4u;
            // 0x17d9a8: 0x8e020098  lw          $v0, 0x98($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17DA04u;
            goto label_17da04;
        }
    }
    ctx->pc = 0x17D9ACu;
label_17d9ac:
    // 0x17d9ac: 0x8e0800b4  lw          $t0, 0xB4($s0)
    ctx->pc = 0x17d9acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x17d9b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17d9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d9b4: 0x8e0700b8  lw          $a3, 0xB8($s0)
    ctx->pc = 0x17d9b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x17d9b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17d9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d9bc: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x17d9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x17d9c0: 0x8e0500c0  lw          $a1, 0xC0($s0)
    ctx->pc = 0x17d9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x17d9c4: 0x8e0600c4  lw          $a2, 0xC4($s0)
    ctx->pc = 0x17d9c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x17d9c8: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x17d9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x17d9cc: 0xae080070  sw          $t0, 0x70($s0)
    ctx->pc = 0x17d9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 8));
    // 0x17d9d0: 0xae070074  sw          $a3, 0x74($s0)
    ctx->pc = 0x17d9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 7));
    // 0x17d9d4: 0xae030078  sw          $v1, 0x78($s0)
    ctx->pc = 0x17d9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
    // 0x17d9d8: 0xae05007c  sw          $a1, 0x7C($s0)
    ctx->pc = 0x17d9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 5));
    // 0x17d9dc: 0xc05faa4  jal         func_17EA90
    ctx->pc = 0x17D9DCu;
    SET_GPR_U32(ctx, 31, 0x17D9E4u);
    ctx->pc = 0x17D9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D9DCu;
    // 0x17d9e0: 0xae06008c  sw          $a2, 0x8C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EA90u, 0x17D9DCu, 0x17D9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D9E4u;
label_17d9e4:
    // 0x17d9e4: 0xc05f8b8  jal         func_17E2E0
    ctx->pc = 0x17D9E4u;
    SET_GPR_U32(ctx, 31, 0x17D9ECu);
    ctx->pc = 0x17D9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D9E4u;
    // 0x17d9e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E2E0u, 0x17D9E4u, 0x17D9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D9ECu;
label_17d9ec:
    // 0x17d9ec: 0xc05f5f4  jal         func_17D7D0
    ctx->pc = 0x17D9ECu;
    SET_GPR_U32(ctx, 31, 0x17D9F4u);
    ctx->pc = 0x17D9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D9ECu;
    // 0x17d9f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D7D0u, 0x17D9ECu, 0x17D9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D9F4u;
label_17d9f4:
    // 0x17d9f4: 0xc05fab6  jal         func_17EAD8
    ctx->pc = 0x17D9F4u;
    SET_GPR_U32(ctx, 31, 0x17D9FCu);
    ctx->pc = 0x17D9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D9F4u;
    // 0x17d9f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EAD8u, 0x17D9F4u, 0x17D9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D9FCu;
label_17d9fc:
    // 0x17d9fc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x17D9FCu;
    {
        const bool branch_taken_0x17d9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D9FCu;
        // 0x17da00: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d9fc) {
            ctx->pc = 0x17DAA0u;
            goto label_17daa0;
        }
    }
    ctx->pc = 0x17DA04u;
label_17da04:
    // 0x17da04: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x17DA04u;
    {
        const bool branch_taken_0x17da04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17da04) {
            ctx->pc = 0x17DA08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DA04u;
            // 0x17da08: 0x8e020094  lw          $v0, 0x94($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17DA44u;
            goto label_17da44;
        }
    }
    ctx->pc = 0x17DA0Cu;
    // 0x17da0c: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x17DA0Cu;
    SET_GPR_U32(ctx, 31, 0x17DA14u);
    ctx->pc = 0x17DA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DA0Cu;
    // 0x17da10: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x17DA0Cu, 0x17DA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DA14u;
label_17da14:
    // 0x17da14: 0x8e050098  lw          $a1, 0x98($s0)
    ctx->pc = 0x17da14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x17da18: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x17DA18u;
    SET_GPR_U32(ctx, 31, 0x17DA20u);
    ctx->pc = 0x17DA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DA18u;
    // 0x17da1c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x17DA18u, 0x17DA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DA20u;
label_17da20:
    // 0x17da20: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x17DA20u;
    {
        const bool branch_taken_0x17da20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17da20) {
            ctx->pc = 0x17DA24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DA20u;
            // 0x17da24: 0xae000098  sw          $zero, 0x98($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17DA28u;
            goto label_17da28;
        }
    }
    ctx->pc = 0x17DA28u;
label_17da28:
    // 0x17da28: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17da28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17da2c: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x17DA2Cu;
    SET_GPR_U32(ctx, 31, 0x17DA34u);
    ctx->pc = 0x17DA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DA2Cu;
    // 0x17da30: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x17DA2Cu, 0x17DA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DA34u;
label_17da34:
    // 0x17da34: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x17da34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x17da38: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x17DA38u;
    {
        const bool branch_taken_0x17da38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17da38) {
            ctx->pc = 0x17DA3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DA38u;
            // 0x17da3c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17DAA0u;
            goto label_17daa0;
        }
    }
    ctx->pc = 0x17DA40u;
    // 0x17da40: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x17da40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_17da44:
    // 0x17da44: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17DA44u;
    {
        const bool branch_taken_0x17da44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DA44u;
        // 0x17da48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17da44) {
            ctx->pc = 0x17DA6Cu;
            goto label_17da6c;
        }
    }
    ctx->pc = 0x17DA4Cu;
    // 0x17da4c: 0x8e0500b4  lw          $a1, 0xB4($s0)
    ctx->pc = 0x17da4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x17da50: 0x8e0600b8  lw          $a2, 0xB8($s0)
    ctx->pc = 0x17da50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x17da54: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17da54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17da58: 0x8e07009c  lw          $a3, 0x9C($s0)
    ctx->pc = 0x17da58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x17da5c: 0xc05fa24  jal         func_17E890
    ctx->pc = 0x17DA5Cu;
    SET_GPR_U32(ctx, 31, 0x17DA64u);
    ctx->pc = 0x17DA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DA5Cu;
    // 0x17da60: 0x8e0800a0  lw          $t0, 0xA0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E890u, 0x17DA5Cu, 0x17DA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DA64u;
label_17da64:
    // 0x17da64: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x17DA64u;
    {
        const bool branch_taken_0x17da64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17da64) {
            ctx->pc = 0x17DA68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DA64u;
            // 0x17da68: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17DAA0u;
            goto label_17daa0;
        }
    }
    ctx->pc = 0x17DA6Cu;
label_17da6c:
    // 0x17da6c: 0x8e0700b4  lw          $a3, 0xB4($s0)
    ctx->pc = 0x17da6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x17da70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17da70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17da74: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x17da74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x17da78: 0x8e0500bc  lw          $a1, 0xBC($s0)
    ctx->pc = 0x17da78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x17da7c: 0x8e0600c0  lw          $a2, 0xC0($s0)
    ctx->pc = 0x17da7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x17da80: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x17da80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x17da84: 0xae030094  sw          $v1, 0x94($s0)
    ctx->pc = 0x17da84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 3));
    // 0x17da88: 0xae0200ac  sw          $v0, 0xAC($s0)
    ctx->pc = 0x17da88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
    // 0x17da8c: 0xae07009c  sw          $a3, 0x9C($s0)
    ctx->pc = 0x17da8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 7));
    // 0x17da90: 0xae0400a0  sw          $a0, 0xA0($s0)
    ctx->pc = 0x17da90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 4));
    // 0x17da94: 0xae0500a4  sw          $a1, 0xA4($s0)
    ctx->pc = 0x17da94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 5));
    // 0x17da98: 0xae0600a8  sw          $a2, 0xA8($s0)
    ctx->pc = 0x17da98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 6));
    // 0x17da9c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x17da9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17daa0:
    // 0x17daa0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17daa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17daa4: 0x3e00008  jr          $ra
    ctx->pc = 0x17DAA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DAA4u;
        // 0x17daa8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DAA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17DAACu;
    // 0x17daac: 0x0  nop
    ctx->pc = 0x17daacu;
    // NOP
    ctx->pc = 0x17dab0u;
}
