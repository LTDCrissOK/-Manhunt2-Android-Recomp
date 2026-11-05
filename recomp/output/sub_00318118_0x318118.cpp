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

// Function: sub_00318118
// Address: 0x318118 - 0x318280
void sub_00318118_0x318118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00318118_0x318118");
#endif

    switch (ctx->pc) {
        case 0x3181d0u: goto label_3181d0;
        case 0x3181f8u: goto label_3181f8;
        case 0x318204u: goto label_318204;
        case 0x31820cu: goto label_31820c;
        case 0x318250u: goto label_318250;
        case 0x31825cu: goto label_31825c;
        case 0x318264u: goto label_318264;
        default: break;
    }

    ctx->pc = 0x318118u;

    // 0x318118: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x318118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31811c: 0x3c03005b  lui         $v1, 0x5B
    ctx->pc = 0x31811cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
    // 0x318120: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x318120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x318124: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x318124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x318128: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x318128u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31812c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x31812cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x318130: 0x246321e8  addiu       $v1, $v1, 0x21E8
    ctx->pc = 0x318130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8680));
    // 0x318134: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x318134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x318138: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x318138u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5B21F4u));
    // 0x31813c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x31813Cu;
    {
        const bool branch_taken_0x31813c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31813Cu;
        // 0x318140: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31813c) {
            ctx->pc = 0x318174u;
            goto label_318174;
        }
    }
    ctx->pc = 0x318144u;
    // 0x318144: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x318144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x318148: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x318148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x31814c: 0x9045c8e4  lbu         $a1, -0x371C($v0)
    ctx->pc = 0x31814cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x3FC8E4u));
    // 0x318150: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x318150u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x318154: 0x9066c8e8  lbu         $a2, -0x3718($v1)
    ctx->pc = 0x318154u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x3FC8E8u));
    // 0x318158: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x318158u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x31815c: 0x9082c8ec  lbu         $v0, -0x3714($a0)
    ctx->pc = 0x31815cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3FC8ECu));
    // 0x318160: 0xa3a50000  sb          $a1, 0x0($sp)
    ctx->pc = 0x318160u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x318164: 0xa3a60001  sb          $a2, 0x1($sp)
    ctx->pc = 0x318164u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x318168: 0xa3a20002  sb          $v0, 0x2($sp)
    ctx->pc = 0x318168u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x31816c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x31816Cu;
    {
        const bool branch_taken_0x31816c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31816Cu;
        // 0x318170: 0xa3a70003  sb          $a3, 0x3($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31816c) {
            ctx->pc = 0x318194u;
            goto label_318194;
        }
    }
    ctx->pc = 0x318174u;
label_318174:
    // 0x318174: 0x90640026  lbu         $a0, 0x26($v1)
    ctx->pc = 0x318174u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 38)));
    // 0x318178: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x318178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x31817c: 0x90620024  lbu         $v0, 0x24($v1)
    ctx->pc = 0x31817cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x318180: 0x90630025  lbu         $v1, 0x25($v1)
    ctx->pc = 0x318180u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 37)));
    // 0x318184: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x318184u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x318188: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x318188u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x31818c: 0xa3a40002  sb          $a0, 0x2($sp)
    ctx->pc = 0x31818cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x318190: 0xa3a50003  sb          $a1, 0x3($sp)
    ctx->pc = 0x318190u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 5));
label_318194:
    // 0x318194: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x318194u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x318198: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x318198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x31819c: 0x8ca2bd38  lw          $v0, -0x42C8($a1)
    ctx->pc = 0x31819cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD38u));
    // 0x3181a0: 0x8c64cd44  lw          $a0, -0x32BC($v1)
    ctx->pc = 0x3181a0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x66CD44u));
    // 0x3181a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3181a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3181a8: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x3181A8u;
    {
        const bool branch_taken_0x3181a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3181ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3181A8u;
        // 0x3181ac: 0xaca2bd38  sw          $v0, -0x42C8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294950200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3181a8) {
            ctx->pc = 0x3181D8u;
            goto label_3181d8;
        }
    }
    ctx->pc = 0x3181B0u;
    // 0x3181b0: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x3181b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x3181b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3181b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3181b8: 0x2484ef00  addiu       $a0, $a0, -0x1100
    ctx->pc = 0x3181b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962944));
    // 0x3181bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3181bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3181c0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3181c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3181c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3181c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3181c8: 0xc0da22a  jal         func_3688A8
    ctx->pc = 0x3181C8u;
    SET_GPR_U32(ctx, 31, 0x3181D0u);
    ctx->pc = 0x3181CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3181C8u;
    // 0x3181cc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3688A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3688A8u, 0x3181C8u, 0x3181D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3181D0u;
label_3181d0:
    // 0x3181d0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3181D0u;
    {
        const bool branch_taken_0x3181d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3181D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3181D0u;
        // 0x3181d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3181d0) {
            ctx->pc = 0x3181FCu;
            goto label_3181fc;
        }
    }
    ctx->pc = 0x3181D8u;
label_3181d8:
    // 0x3181d8: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x3181d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x3181dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3181dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3181e0: 0x2484ef00  addiu       $a0, $a0, -0x1100
    ctx->pc = 0x3181e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962944));
    // 0x3181e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3181e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3181e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3181e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3181ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3181ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3181f0: 0xc0da22a  jal         func_3688A8
    ctx->pc = 0x3181F0u;
    SET_GPR_U32(ctx, 31, 0x3181F8u);
    ctx->pc = 0x3181F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3181F0u;
    // 0x3181f4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3688A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3688A8u, 0x3181F0u, 0x3181F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3181F8u;
label_3181f8:
    // 0x3181f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3181f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3181fc:
    // 0x3181fc: 0xc086fbc  jal         func_21BEF0
    ctx->pc = 0x3181FCu;
    SET_GPR_U32(ctx, 31, 0x318204u);
    ctx->pc = 0x318200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3181FCu;
    // 0x318200: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BEF0u, 0x3181FCu, 0x318204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318204u;
label_318204:
    // 0x318204: 0xc0b93e0  jal         func_2E4F80
    ctx->pc = 0x318204u;
    SET_GPR_U32(ctx, 31, 0x31820Cu);
    ctx->pc = 0x318208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318204u;
    // 0x318208: 0x8e04bd50  lw          $a0, -0x42B0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4F80u, 0x318204u, 0x31820Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31820Cu;
label_31820c:
    // 0x31820c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31820Cu;
    {
        const bool branch_taken_0x31820c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31820Cu;
        // 0x318210: 0x2403ffef  addiu       $v1, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31820c) {
            ctx->pc = 0x318228u;
            goto label_318228;
        }
    }
    ctx->pc = 0x318214u;
    // 0x318214: 0x8e04bd50  lw          $a0, -0x42B0($s0)
    ctx->pc = 0x318214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950224)));
    // 0x318218: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x318218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x31821c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x31821cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x318220: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x318220u;
    {
        const bool branch_taken_0x318220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318220u;
        // 0x318224: 0xac8200c0  sw          $v0, 0xC0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318220) {
            ctx->pc = 0x318244u;
            goto label_318244;
        }
    }
    ctx->pc = 0x318228u;
label_318228:
    // 0x318228: 0x8e04bd50  lw          $a0, -0x42B0($s0)
    ctx->pc = 0x318228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950224)));
    // 0x31822c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x31822cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x318230: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x318230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x318234: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x318234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x318238: 0xac8200c0  sw          $v0, 0xC0($a0)
    ctx->pc = 0x318238u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 2));
    // 0x31823c: 0x8ca395a0  lw          $v1, -0x6A60($a1)
    ctx->pc = 0x31823cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F95A0u));
    // 0x318240: 0xac8300dc  sw          $v1, 0xDC($a0)
    ctx->pc = 0x318240u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 3));
label_318244:
    // 0x318244: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x318244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318248: 0xc0c2a36  jal         func_30A8D8
    ctx->pc = 0x318248u;
    SET_GPR_U32(ctx, 31, 0x318250u);
    ctx->pc = 0x31824Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318248u;
    // 0x31824c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A8D8u, 0x318248u, 0x318250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318250u;
label_318250:
    // 0x318250: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x318250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x318254: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x318254u;
    SET_GPR_U32(ctx, 31, 0x31825Cu);
    ctx->pc = 0x318258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318254u;
    // 0x318258: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x318254u, 0x31825Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31825Cu;
label_31825c:
    // 0x31825c: 0xc0c6d72  jal         func_31B5C8
    ctx->pc = 0x31825Cu;
    SET_GPR_U32(ctx, 31, 0x318264u);
    ctx->pc = 0x318260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31825Cu;
    // 0x318260: 0x264421e8  addiu       $a0, $s2, 0x21E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B5C8u, 0x31825Cu, 0x318264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318264u;
label_318264:
    // 0x318264: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x318264u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x318268: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x318268u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31826c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x31826cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x318270: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x318270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x318274: 0x3e00008  jr          $ra
    ctx->pc = 0x318274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x318278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318274u;
        // 0x318278: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31827Cu;
    // 0x31827c: 0x0  nop
    ctx->pc = 0x31827cu;
    // NOP
    ctx->pc = 0x318280u;
}
