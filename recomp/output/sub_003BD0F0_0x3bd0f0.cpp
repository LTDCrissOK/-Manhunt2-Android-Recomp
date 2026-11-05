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

// Function: sub_003BD0F0
// Address: 0x3bd0f0 - 0x3bd220
void sub_003BD0F0_0x3bd0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BD0F0_0x3bd0f0");
#endif

    switch (ctx->pc) {
        case 0x3bd130u: goto label_3bd130;
        case 0x3bd14cu: goto label_3bd14c;
        case 0x3bd170u: goto label_3bd170;
        case 0x3bd180u: goto label_3bd180;
        case 0x3bd1acu: goto label_3bd1ac;
        case 0x3bd1c4u: goto label_3bd1c4;
        default: break;
    }

    ctx->pc = 0x3bd0f0u;

    // 0x3bd0f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3bd0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3bd0f4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x3bd0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x3bd0f8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3bd0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x3bd0fc: 0x3c150066  lui         $s5, 0x66
    ctx->pc = 0x3bd0fcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)102 << 16));
    // 0x3bd100: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3bd100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x3bd104: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3bd104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3bd108: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3bd108u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd10c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3bd10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3bd110: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3bd110u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bd114: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3bd114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3bd118: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3bd118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3bd11c: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x3bd11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x3bd120: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3bd120u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3bd124: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3BD124u;
    {
        const bool branch_taken_0x3bd124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD124u;
        // 0x3bd128: 0x26b4d340  addiu       $s4, $s5, -0x2CC0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd124) {
            ctx->pc = 0x3BD160u;
            goto label_3bd160;
        }
    }
    ctx->pc = 0x3BD12Cu;
    // 0x3bd12c: 0x3c110066  lui         $s1, 0x66
    ctx->pc = 0x3bd12cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)102 << 16));
label_3bd130:
    // 0x3bd130: 0x101200  sll         $v0, $s0, 8
    ctx->pc = 0x3bd130u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x3bd134: 0x2625c344  addiu       $a1, $s1, -0x3CBC
    ctx->pc = 0x3bd134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294951748));
    // 0x3bd138: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x3bd138u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x3bd13c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3bd13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd140: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x3bd140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3bd144: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3BD144u;
    SET_GPR_U32(ctx, 31, 0x3BD14Cu);
    ctx->pc = 0x3BD148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD144u;
    // 0x3bd148: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3BD144u, 0x3BD14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD14Cu;
label_3bd14c:
    // 0x3bd14c: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x3bd14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x3bd150: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x3bd150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x3bd154: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3bd154u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3bd158: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3BD158u;
    {
        const bool branch_taken_0x3bd158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BD15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD158u;
        // 0x3bd15c: 0x283a021  addu        $s4, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd158) {
            ctx->pc = 0x3BD130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bd130;
        }
    }
    ctx->pc = 0x3BD160u;
label_3bd160:
    // 0x3bd160: 0x8e72000c  lw          $s2, 0xC($s3)
    ctx->pc = 0x3bd160u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x3bd164: 0x1a400023  blez        $s2, . + 4 + (0x23 << 2)
    ctx->pc = 0x3BD164u;
    {
        const bool branch_taken_0x3bd164 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x3BD168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD164u;
        // 0x3bd168: 0x26b4d340  addiu       $s4, $s5, -0x2CC0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd164) {
            ctx->pc = 0x3BD1F4u;
            goto label_3bd1f4;
        }
    }
    ctx->pc = 0x3BD16Cu;
    // 0x3bd16c: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x3bd16cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3bd170:
    // 0x3bd170: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3bd170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd174: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3bd174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd178: 0xc0ef41a  jal         func_3BD068
    ctx->pc = 0x3BD178u;
    SET_GPR_U32(ctx, 31, 0x3BD180u);
    ctx->pc = 0x3BD17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD178u;
    // 0x3bd17c: 0x2843021  addu        $a2, $s4, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BD068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD068u, 0x3BD178u, 0x3BD180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD180u;
label_3bd180:
    // 0x3bd180: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3BD180u;
    {
        const bool branch_taken_0x3bd180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BD184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD180u;
        // 0x3bd184: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd180) {
            ctx->pc = 0x3BD1FCu;
            goto label_3bd1fc;
        }
    }
    ctx->pc = 0x3BD188u;
    // 0x3bd188: 0x8e700008  lw          $s0, 0x8($s3)
    ctx->pc = 0x3bd188u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x3bd18c: 0x3c110066  lui         $s1, 0x66
    ctx->pc = 0x3bd18cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)102 << 16));
    // 0x3bd190: 0x8e24e340  lw          $a0, -0x1CC0($s1)
    ctx->pc = 0x3bd190u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x65E340u));
    // 0x3bd194: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3bd194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd198: 0x250102a  slt         $v0, $s2, $s0
    ctx->pc = 0x3bd198u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3bd19c: 0x242800b  movn        $s0, $s2, $v0
    ctx->pc = 0x3bd19cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
    // 0x3bd1a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3bd1a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd1a4: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3BD1A4u;
    SET_GPR_U32(ctx, 31, 0x3BD1ACu);
    ctx->pc = 0x3BD1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD1A4u;
    // 0x3bd1a8: 0x2509023  subu        $s2, $s2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3BD1A4u, 0x3BD1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD1ACu;
label_3bd1ac:
    // 0x3bd1ac: 0x8e23e340  lw          $v1, -0x1CC0($s1)
    ctx->pc = 0x3bd1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294959936)));
    // 0x3bd1b0: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x3bd1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x3bd1b4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3bd1b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd1b8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3bd1b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd1bc: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3BD1BCu;
    SET_GPR_U32(ctx, 31, 0x3BD1C4u);
    ctx->pc = 0x3BD1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD1BCu;
    // 0x3bd1c0: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3BD1BCu, 0x3BD1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD1C4u;
label_3bd1c4:
    // 0x3bd1c4: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x3bd1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x3bd1c8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3bd1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3bd1cc: 0x8e24e340  lw          $a0, -0x1CC0($s1)
    ctx->pc = 0x3bd1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294959936)));
    // 0x3bd1d0: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x3bd1d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3bd1d4: 0x24a2001f  addiu       $v0, $a1, 0x1F
    ctx->pc = 0x3bd1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 31));
    // 0x3bd1d8: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x3bd1d8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x3bd1dc: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x3bd1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x3bd1e0: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x3bd1e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x3bd1e4: 0xae24e340  sw          $a0, -0x1CC0($s1)
    ctx->pc = 0x3bd1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294959936), GPR_U32(ctx, 4));
    // 0x3bd1e8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3bd1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3bd1ec: 0x1e40ffe0  bgtz        $s2, . + 4 + (-0x20 << 2)
    ctx->pc = 0x3BD1ECu;
    {
        const bool branch_taken_0x3bd1ec = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x3BD1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD1ECu;
        // 0x3bd1f0: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd1ec) {
            ctx->pc = 0x3BD170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bd170;
        }
    }
    ctx->pc = 0x3BD1F4u;
label_3bd1f4:
    // 0x3bd1f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3bd1f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd1f8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3bd1f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3bd1fc:
    // 0x3bd1fc: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x3bd1fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3bd200: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3bd200u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3bd204: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3bd204u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3bd208: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3bd208u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bd20c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3bd20cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bd210: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3bd210u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bd214: 0x3e00008  jr          $ra
    ctx->pc = 0x3BD214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BD218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD214u;
        // 0x3bd218: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BD214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BD21Cu;
    // 0x3bd21c: 0x0  nop
    ctx->pc = 0x3bd21cu;
    // NOP
    ctx->pc = 0x3bd220u;
}
