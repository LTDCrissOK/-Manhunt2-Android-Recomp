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

// Function: sub_003B2120
// Address: 0x3b2120 - 0x3b2238
void sub_003B2120_0x3b2120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B2120_0x3b2120");
#endif

    switch (ctx->pc) {
        case 0x3b2140u: goto label_3b2140;
        case 0x3b2150u: goto label_3b2150;
        case 0x3b2168u: goto label_3b2168;
        case 0x3b217cu: goto label_3b217c;
        case 0x3b218cu: goto label_3b218c;
        case 0x3b219cu: goto label_3b219c;
        case 0x3b21acu: goto label_3b21ac;
        case 0x3b21bcu: goto label_3b21bc;
        case 0x3b21ccu: goto label_3b21cc;
        case 0x3b21dcu: goto label_3b21dc;
        case 0x3b21ecu: goto label_3b21ec;
        case 0x3b21fcu: goto label_3b21fc;
        default: break;
    }

    ctx->pc = 0x3b2120u;

    // 0x3b2120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b2120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b2124: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b2124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3b2128: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3b2128u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b212c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3b212cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b2130: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b2130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b2134: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b2134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b2138: 0xc0ec5a6  jal         func_3B1698
    ctx->pc = 0x3B2138u;
    SET_GPR_U32(ctx, 31, 0x3B2140u);
    ctx->pc = 0x3B213Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2138u;
    // 0x3b213c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1698u, 0x3B2138u, 0x3B2140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2140u;
label_3b2140:
    // 0x3b2140: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b2140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2144: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3b2144u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x3b2148: 0xc0ec5a6  jal         func_3B1698
    ctx->pc = 0x3B2148u;
    SET_GPR_U32(ctx, 31, 0x3B2150u);
    ctx->pc = 0x3B214Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2148u;
    // 0x3b214c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1698u, 0x3B2148u, 0x3B2150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2150u;
label_3b2150:
    // 0x3b2150: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3b2150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b2154: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3b2154u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3b2158: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b2158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b215c: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x3b215cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x3b2160: 0xc0ec5a6  jal         func_3B1698
    ctx->pc = 0x3B2160u;
    SET_GPR_U32(ctx, 31, 0x3B2168u);
    ctx->pc = 0x3B2164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2160u;
    // 0x3b2164: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1698u, 0x3B2160u, 0x3B2168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2168u;
label_3b2168:
    // 0x3b2168: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b2168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b216c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3b216cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3b2170: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3b2170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b2174: 0xc0ec5a6  jal         func_3B1698
    ctx->pc = 0x3B2174u;
    SET_GPR_U32(ctx, 31, 0x3B217Cu);
    ctx->pc = 0x3B2178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2174u;
    // 0x3b2178: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1698u, 0x3B2174u, 0x3B217Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B217Cu;
label_3b217c:
    // 0x3b217c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b217cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2180: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x3b2180u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x3b2184: 0xc0ec5a6  jal         func_3B1698
    ctx->pc = 0x3B2184u;
    SET_GPR_U32(ctx, 31, 0x3B218Cu);
    ctx->pc = 0x3B2188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2184u;
    // 0x3b2188: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1698u, 0x3B2184u, 0x3B218Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B218Cu;
label_3b218c:
    // 0x3b218c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b218cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2190: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x3b2190u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x3b2194: 0xc0ec5a6  jal         func_3B1698
    ctx->pc = 0x3B2194u;
    SET_GPR_U32(ctx, 31, 0x3B219Cu);
    ctx->pc = 0x3B2198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2194u;
    // 0x3b2198: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1698u, 0x3B2194u, 0x3B219Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B219Cu;
label_3b219c:
    // 0x3b219c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b219cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b21a0: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x3b21a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x3b21a4: 0xc0ec5a6  jal         func_3B1698
    ctx->pc = 0x3B21A4u;
    SET_GPR_U32(ctx, 31, 0x3B21ACu);
    ctx->pc = 0x3B21A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B21A4u;
    // 0x3b21a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1698u, 0x3B21A4u, 0x3B21ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B21ACu;
label_3b21ac:
    // 0x3b21ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b21acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b21b0: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x3b21b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x3b21b4: 0xc0ec5a6  jal         func_3B1698
    ctx->pc = 0x3B21B4u;
    SET_GPR_U32(ctx, 31, 0x3B21BCu);
    ctx->pc = 0x3B21B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B21B4u;
    // 0x3b21b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1698u, 0x3B21B4u, 0x3B21BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B21BCu;
label_3b21bc:
    // 0x3b21bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b21bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b21c0: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x3b21c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x3b21c4: 0xc0ec5a6  jal         func_3B1698
    ctx->pc = 0x3B21C4u;
    SET_GPR_U32(ctx, 31, 0x3B21CCu);
    ctx->pc = 0x3B21C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B21C4u;
    // 0x3b21c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1698u, 0x3B21C4u, 0x3B21CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B21CCu;
label_3b21cc:
    // 0x3b21cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b21ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b21d0: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x3b21d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x3b21d4: 0xc0ec5a6  jal         func_3B1698
    ctx->pc = 0x3B21D4u;
    SET_GPR_U32(ctx, 31, 0x3B21DCu);
    ctx->pc = 0x3B21D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B21D4u;
    // 0x3b21d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1698u, 0x3B21D4u, 0x3B21DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B21DCu;
label_3b21dc:
    // 0x3b21dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b21dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b21e0: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x3b21e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x3b21e4: 0xc0ec5a6  jal         func_3B1698
    ctx->pc = 0x3B21E4u;
    SET_GPR_U32(ctx, 31, 0x3B21ECu);
    ctx->pc = 0x3B21E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B21E4u;
    // 0x3b21e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1698u, 0x3B21E4u, 0x3B21ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B21ECu;
label_3b21ec:
    // 0x3b21ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b21ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b21f0: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x3b21f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x3b21f4: 0xc0ec5a6  jal         func_3B1698
    ctx->pc = 0x3B21F4u;
    SET_GPR_U32(ctx, 31, 0x3B21FCu);
    ctx->pc = 0x3B21F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B21F4u;
    // 0x3b21f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1698u, 0x3B21F4u, 0x3B21FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B21FCu;
label_3b21fc:
    // 0x3b21fc: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x3b21fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x3b2200: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3b2200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3b2204: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x3b2204u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    // 0x3b2208: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B2208u;
    {
        const bool branch_taken_0x3b2208 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3B220Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2208u;
        // 0x3b220c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2208) {
            ctx->pc = 0x3B221Cu;
            goto label_3b221c;
        }
    }
    ctx->pc = 0x3B2210u;
    // 0x3b2210: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x3b2210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3b2214: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B2214u;
    {
        const bool branch_taken_0x3b2214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2214u;
        // 0x3b2218: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2214) {
            ctx->pc = 0x3B2224u;
            goto label_3b2224;
        }
    }
    ctx->pc = 0x3B221Cu;
label_3b221c:
    // 0x3b221c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b221cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b2220: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b2220u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b2224:
    // 0x3b2224: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b2224u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b2228: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b2228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b222c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B222Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B2230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B222Cu;
        // 0x3b2230: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B222Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B2234u;
    // 0x3b2234: 0x0  nop
    ctx->pc = 0x3b2234u;
    // NOP
    ctx->pc = 0x3b2238u;
}
