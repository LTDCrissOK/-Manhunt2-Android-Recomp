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

// Function: sub_003AA8C8
// Address: 0x3aa8c8 - 0x3aa998
void sub_003AA8C8_0x3aa8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA8C8_0x3aa8c8");
#endif

    switch (ctx->pc) {
        case 0x3aa8c8u: goto label_3aa8c8;
        case 0x3aa8ccu: goto label_3aa8cc;
        case 0x3aa8d0u: goto label_3aa8d0;
        case 0x3aa8d4u: goto label_3aa8d4;
        case 0x3aa8d8u: goto label_3aa8d8;
        case 0x3aa8dcu: goto label_3aa8dc;
        case 0x3aa8e0u: goto label_3aa8e0;
        case 0x3aa8e4u: goto label_3aa8e4;
        case 0x3aa8e8u: goto label_3aa8e8;
        case 0x3aa8ecu: goto label_3aa8ec;
        case 0x3aa8f0u: goto label_3aa8f0;
        case 0x3aa8f4u: goto label_3aa8f4;
        case 0x3aa8f8u: goto label_3aa8f8;
        case 0x3aa8fcu: goto label_3aa8fc;
        case 0x3aa900u: goto label_3aa900;
        case 0x3aa904u: goto label_3aa904;
        case 0x3aa908u: goto label_3aa908;
        case 0x3aa90cu: goto label_3aa90c;
        case 0x3aa910u: goto label_3aa910;
        case 0x3aa914u: goto label_3aa914;
        case 0x3aa918u: goto label_3aa918;
        case 0x3aa91cu: goto label_3aa91c;
        case 0x3aa920u: goto label_3aa920;
        case 0x3aa924u: goto label_3aa924;
        case 0x3aa928u: goto label_3aa928;
        case 0x3aa92cu: goto label_3aa92c;
        case 0x3aa930u: goto label_3aa930;
        case 0x3aa934u: goto label_3aa934;
        case 0x3aa938u: goto label_3aa938;
        case 0x3aa93cu: goto label_3aa93c;
        case 0x3aa940u: goto label_3aa940;
        case 0x3aa944u: goto label_3aa944;
        case 0x3aa948u: goto label_3aa948;
        case 0x3aa94cu: goto label_3aa94c;
        case 0x3aa950u: goto label_3aa950;
        case 0x3aa954u: goto label_3aa954;
        case 0x3aa958u: goto label_3aa958;
        case 0x3aa95cu: goto label_3aa95c;
        case 0x3aa960u: goto label_3aa960;
        case 0x3aa964u: goto label_3aa964;
        case 0x3aa968u: goto label_3aa968;
        case 0x3aa96cu: goto label_3aa96c;
        case 0x3aa970u: goto label_3aa970;
        case 0x3aa974u: goto label_3aa974;
        case 0x3aa978u: goto label_3aa978;
        case 0x3aa97cu: goto label_3aa97c;
        case 0x3aa980u: goto label_3aa980;
        case 0x3aa984u: goto label_3aa984;
        case 0x3aa988u: goto label_3aa988;
        case 0x3aa98cu: goto label_3aa98c;
        case 0x3aa990u: goto label_3aa990;
        case 0x3aa994u: goto label_3aa994;
        default: break;
    }

    ctx->pc = 0x3aa8c8u;

label_3aa8c8:
    // 0x3aa8c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3aa8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3aa8cc:
    // 0x3aa8cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3aa8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3aa8d0:
    // 0x3aa8d0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3aa8d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3aa8d4:
    // 0x3aa8d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3aa8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3aa8d8:
    // 0x3aa8d8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3aa8d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3aa8dc:
    // 0x3aa8dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3aa8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3aa8e0:
    // 0x3aa8e0: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_3aa8e4:
    if (ctx->pc == 0x3AA8E4u) {
        ctx->pc = 0x3AA8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA8E0u;
        // 0x3aa8e4: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA8E8u;
        goto label_3aa8e8;
    }
    ctx->pc = 0x3AA8E0u;
    {
        const bool branch_taken_0x3aa8e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AA8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA8E0u;
        // 0x3aa8e4: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa8e0) {
            ctx->pc = 0x3AA900u;
            goto label_3aa900;
        }
    }
    ctx->pc = 0x3AA8E8u;
label_3aa8e8:
    // 0x3aa8e8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3aa8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3aa8ec:
    // 0x3aa8ec: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3aa8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_3aa8f0:
    // 0x3aa8f0: 0x2484eea0  addiu       $a0, $a0, -0x1160
    ctx->pc = 0x3aa8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962848));
label_3aa8f4:
    // 0x3aa8f4: 0x10000009  b           . + 4 + (0x9 << 2)
label_3aa8f8:
    if (ctx->pc == 0x3AA8F8u) {
        ctx->pc = 0x3AA8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA8F4u;
        // 0x3aa8f8: 0x24a5ed90  addiu       $a1, $a1, -0x1270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA8FCu;
        goto label_3aa8fc;
    }
    ctx->pc = 0x3AA8F4u;
    {
        const bool branch_taken_0x3aa8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA8F4u;
        // 0x3aa8f8: 0x24a5ed90  addiu       $a1, $a1, -0x1270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa8f4) {
            ctx->pc = 0x3AA91Cu;
            goto label_3aa91c;
        }
    }
    ctx->pc = 0x3AA8FCu;
label_3aa8fc:
    // 0x3aa8fc: 0x0  nop
    ctx->pc = 0x3aa8fcu;
    // NOP
label_3aa900:
    // 0x3aa900: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3aa900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3aa904:
    // 0x3aa904: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_3aa908:
    if (ctx->pc == 0x3AA908u) {
        ctx->pc = 0x3AA90Cu;
        goto label_3aa90c;
    }
    ctx->pc = 0x3AA904u;
    {
        const bool branch_taken_0x3aa904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aa904) {
            ctx->pc = 0x3AA930u;
            goto label_3aa930;
        }
    }
    ctx->pc = 0x3AA90Cu;
label_3aa90c:
    // 0x3aa90c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3aa90cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3aa910:
    // 0x3aa910: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3aa910u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_3aa914:
    // 0x3aa914: 0x2484eeb0  addiu       $a0, $a0, -0x1150
    ctx->pc = 0x3aa914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962864));
label_3aa918:
    // 0x3aa918: 0x24a5edc0  addiu       $a1, $a1, -0x1240
    ctx->pc = 0x3aa918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962624));
label_3aa91c:
    // 0x3aa91c: 0xc0ea7ec  jal         func_3A9FB0
label_3aa920:
    if (ctx->pc == 0x3AA920u) {
        ctx->pc = 0x3AA924u;
        goto label_3aa924;
    }
    ctx->pc = 0x3AA91Cu;
    SET_GPR_U32(ctx, 31, 0x3AA924u);
    ctx->pc = 0x3A9FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9FB0u, 0x3AA91Cu, 0x3AA924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA924u;
label_3aa924:
    // 0x3aa924: 0x10000016  b           . + 4 + (0x16 << 2)
label_3aa928:
    if (ctx->pc == 0x3AA928u) {
        ctx->pc = 0x3AA928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA924u;
        // 0x3aa928: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA92Cu;
        goto label_3aa92c;
    }
    ctx->pc = 0x3AA924u;
    {
        const bool branch_taken_0x3aa924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA924u;
        // 0x3aa928: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa924) {
            ctx->pc = 0x3AA980u;
            goto label_3aa980;
        }
    }
    ctx->pc = 0x3AA92Cu;
label_3aa92c:
    // 0x3aa92c: 0x0  nop
    ctx->pc = 0x3aa92cu;
    // NOP
label_3aa930:
    // 0x3aa930: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_3aa934:
    if (ctx->pc == 0x3AA934u) {
        ctx->pc = 0x3AA934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA930u;
        // 0x3aa934: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA938u;
        goto label_3aa938;
    }
    ctx->pc = 0x3AA930u;
    {
        const bool branch_taken_0x3aa930 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA930u;
        // 0x3aa934: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa930) {
            ctx->pc = 0x3AA974u;
            goto label_3aa974;
        }
    }
    ctx->pc = 0x3AA938u;
label_3aa938:
    // 0x3aa938: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3aa938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3aa93c:
    // 0x3aa93c: 0x54a20008  bnel        $a1, $v0, . + 4 + (0x8 << 2)
label_3aa940:
    if (ctx->pc == 0x3AA940u) {
        ctx->pc = 0x3AA940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA93Cu;
        // 0x3aa940: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA944u;
        goto label_3aa944;
    }
    ctx->pc = 0x3AA93Cu;
    {
        const bool branch_taken_0x3aa93c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3aa93c) {
            ctx->pc = 0x3AA940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AA93Cu;
            // 0x3aa940: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AA960u;
            goto label_3aa960;
        }
    }
    ctx->pc = 0x3AA944u;
label_3aa944:
    // 0x3aa944: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x3aa944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_3aa948:
    // 0x3aa948: 0x91102a  slt         $v0, $a0, $s1
    ctx->pc = 0x3aa948u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_3aa94c:
    // 0x3aa94c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_3aa950:
    if (ctx->pc == 0x3AA950u) {
        ctx->pc = 0x3AA950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA94Cu;
        // 0x3aa950: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA954u;
        goto label_3aa954;
    }
    ctx->pc = 0x3AA94Cu;
    {
        const bool branch_taken_0x3aa94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA94Cu;
        // 0x3aa950: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa94c) {
            ctx->pc = 0x3AA974u;
            goto label_3aa974;
        }
    }
    ctx->pc = 0x3AA954u;
label_3aa954:
    // 0x3aa954: 0x10000007  b           . + 4 + (0x7 << 2)
label_3aa958:
    if (ctx->pc == 0x3AA958u) {
        ctx->pc = 0x3AA958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA954u;
        // 0x3aa958: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA95Cu;
        goto label_3aa95c;
    }
    ctx->pc = 0x3AA954u;
    {
        const bool branch_taken_0x3aa954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA954u;
        // 0x3aa958: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa954) {
            ctx->pc = 0x3AA974u;
            goto label_3aa974;
        }
    }
    ctx->pc = 0x3AA95Cu;
label_3aa95c:
    // 0x3aa95c: 0x0  nop
    ctx->pc = 0x3aa95cu;
    // NOP
label_3aa960:
    // 0x3aa960: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3aa964:
    if (ctx->pc == 0x3AA964u) {
        ctx->pc = 0x3AA964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA960u;
        // 0x3aa964: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA968u;
        goto label_3aa968;
    }
    ctx->pc = 0x3AA960u;
    {
        const bool branch_taken_0x3aa960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA960u;
        // 0x3aa964: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa960) {
            ctx->pc = 0x3AA974u;
            goto label_3aa974;
        }
    }
    ctx->pc = 0x3AA968u;
label_3aa968:
    // 0x3aa968: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x3aa968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_3aa96c:
    // 0x3aa96c: 0x40f809  jalr        $v0
label_3aa970:
    if (ctx->pc == 0x3AA970u) {
        ctx->pc = 0x3AA970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA96Cu;
        // 0x3aa970: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA974u;
        goto label_3aa974;
    }
    ctx->pc = 0x3AA96Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AA974u);
        ctx->pc = 0x3AA970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA96Cu;
        // 0x3aa970: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA96Cu, 0x3AA974u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AA974u;
label_3aa974:
    // 0x3aa974: 0x2111026  xor         $v0, $s0, $s1
    ctx->pc = 0x3aa974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 17));
label_3aa978:
    // 0x3aa978: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x3aa978u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
label_3aa97c:
    // 0x3aa97c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3aa97cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3aa980:
    // 0x3aa980: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3aa980u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3aa984:
    // 0x3aa984: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3aa984u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3aa988:
    // 0x3aa988: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3aa988u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3aa98c:
    // 0x3aa98c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3aa98cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3aa990:
    // 0x3aa990: 0x3e00008  jr          $ra
label_3aa994:
    if (ctx->pc == 0x3AA994u) {
        ctx->pc = 0x3AA994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA990u;
        // 0x3aa994: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA998u;
        goto label_fallthrough_0x3aa990;
    }
    ctx->pc = 0x3AA990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AA994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA990u;
        // 0x3aa994: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3aa990:
    ctx->pc = 0x3AA998u;
}
