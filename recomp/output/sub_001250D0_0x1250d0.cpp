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

// Function: sub_001250D0
// Address: 0x1250d0 - 0x125240
void sub_001250D0_0x1250d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001250D0_0x1250d0");
#endif

    switch (ctx->pc) {
        case 0x125118u: goto label_125118;
        case 0x125184u: goto label_125184;
        case 0x1251b8u: goto label_1251b8;
        default: break;
    }

    ctx->pc = 0x1250d0u;

    // 0x1250d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1250d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1250d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1250d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1250d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1250d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1250dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1250dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1250e0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1250e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1250e4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1250e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1250e8: 0x30d600ff  andi        $s6, $a2, 0xFF
    ctx->pc = 0x1250e8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1250ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1250ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1250f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1250f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1250f4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1250f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1250f8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1250f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1250fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1250fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125100: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x125100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x125104: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x125104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125108: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x125108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x12510c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12510Cu;
    {
        const bool branch_taken_0x12510c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12510Cu;
        // 0x125110: 0x3c140040  lui         $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12510c) {
            ctx->pc = 0x125120u;
            goto label_125120;
        }
    }
    ctx->pc = 0x125114u;
    // 0x125114: 0x0  nop
    ctx->pc = 0x125114u;
    // NOP
label_125118:
    // 0x125118: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x125118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12511c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x12511cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_125120:
    // 0x125120: 0x2c820010  sltiu       $v0, $a0, 0x10
    ctx->pc = 0x125120u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x125124: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x125124u;
    {
        const bool branch_taken_0x125124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125124u;
        // 0x125128: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125124) {
            ctx->pc = 0x12515Cu;
            goto label_12515c;
        }
    }
    ctx->pc = 0x12512Cu;
    // 0x12512c: 0x92020300  lbu         $v0, 0x300($s0)
    ctx->pc = 0x12512cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 768)));
    // 0x125130: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x125130u;
    {
        const bool branch_taken_0x125130 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x125134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125130u;
        // 0x125134: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125130) {
            ctx->pc = 0x125158u;
            goto label_125158;
        }
    }
    ctx->pc = 0x125138u;
    // 0x125138: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x125138u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x12513c: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x12513cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x125140: 0x8c430240  lw          $v1, 0x240($v0)
    ctx->pc = 0x125140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 576)));
    // 0x125144: 0x1060fff4  beqz        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x125144u;
    {
        const bool branch_taken_0x125144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x125148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125144u;
        // 0x125148: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125144) {
            ctx->pc = 0x125118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125118;
        }
    }
    ctx->pc = 0x12514Cu;
    // 0x12514c: 0x1473fff2  bne         $v1, $s3, . + 4 + (-0xE << 2)
    ctx->pc = 0x12514Cu;
    {
        const bool branch_taken_0x12514c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x125150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12514Cu;
        // 0x125150: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12514c) {
            ctx->pc = 0x125118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125118;
        }
    }
    ctx->pc = 0x125154u;
    // 0x125154: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x125154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_125158:
    // 0x125158: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x125158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_12515c:
    // 0x12515c: 0x14c2001e  bne         $a2, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x12515Cu;
    {
        const bool branch_taken_0x12515c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x125160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12515Cu;
        // 0x125160: 0x26150248  addiu       $s5, $s0, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12515c) {
            ctx->pc = 0x1251D8u;
            goto label_1251d8;
        }
    }
    ctx->pc = 0x125164u;
    // 0x125164: 0x8e020240  lw          $v0, 0x240($s0)
    ctx->pc = 0x125164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 576)));
    // 0x125168: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x125168u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12516c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12516cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125170: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x125170u;
    {
        const bool branch_taken_0x125170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x125174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125170u;
        // 0x125174: 0x26110240  addiu       $s1, $s0, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125170) {
            ctx->pc = 0x125180u;
            goto label_125180;
        }
    }
    ctx->pc = 0x125178u;
    // 0x125178: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x125178u;
    {
        const bool branch_taken_0x125178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125178u;
        // 0x12517c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125178) {
            ctx->pc = 0x1251ACu;
            goto label_1251ac;
        }
    }
    ctx->pc = 0x125180u;
label_125180:
    // 0x125180: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x125180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_125184:
    // 0x125184: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x125184u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x125188: 0x2c830010  sltiu       $v1, $a0, 0x10
    ctx->pc = 0x125188u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x12518c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x12518Cu;
    {
        const bool branch_taken_0x12518c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x125190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12518Cu;
        // 0x125190: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12518c) {
            ctx->pc = 0x1251ACu;
            goto label_1251ac;
        }
    }
    ctx->pc = 0x125194u;
    // 0x125194: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x125194u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x125198: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x125198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x12519c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x12519cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1251a0: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1251A0u;
    {
        const bool branch_taken_0x1251a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1251A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1251A0u;
        // 0x1251a4: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1251a0) {
            ctx->pc = 0x125184u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125184;
        }
    }
    ctx->pc = 0x1251A8u;
    // 0x1251a8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1251a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1251ac:
    // 0x1251ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1251acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1251b0: 0xc0499c6  jal         func_126718
    ctx->pc = 0x1251B0u;
    SET_GPR_U32(ctx, 31, 0x1251B8u);
    ctx->pc = 0x1251B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1251B0u;
    // 0x1251b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126718u, 0x1251B0u, 0x1251B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1251B8u;
label_1251b8:
    // 0x1251b8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1251b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1251bc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1251bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1251c0: 0x2431018  mult        $v0, $s2, $v1
    ctx->pc = 0x1251c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1251c4: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x1251c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1251c8: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x1251c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
    // 0x1251cc: 0x92020300  lbu         $v0, 0x300($s0)
    ctx->pc = 0x1251ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 768)));
    // 0x1251d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1251d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1251d4: 0xa2020300  sb          $v0, 0x300($s0)
    ctx->pc = 0x1251d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 768), (uint8_t)GPR_U32(ctx, 2));
label_1251d8:
    // 0x1251d8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1251d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1251dc: 0x8e83a9d4  lw          $v1, -0x562C($s4)
    ctx->pc = 0x1251dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294945236)));
    // 0x1251e0: 0xc22018  mult        $a0, $a2, $v0
    ctx->pc = 0x1251e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1251e4: 0x2a42821  addu        $a1, $s5, $a0
    ctx->pc = 0x1251e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x1251e8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1251e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1251ec: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1251ECu;
    {
        const bool branch_taken_0x1251ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1251F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1251ECu;
        // 0x1251f0: 0x2041021  addu        $v0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1251ec) {
            ctx->pc = 0x125208u;
            goto label_125208;
        }
    }
    ctx->pc = 0x1251F4u;
    // 0x1251f4: 0x2041821  addu        $v1, $s0, $a0
    ctx->pc = 0x1251f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1251f8: 0x90620244  lbu         $v0, 0x244($v1)
    ctx->pc = 0x1251f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 580)));
    // 0x1251fc: 0x56102b  sltu        $v0, $v0, $s6
    ctx->pc = 0x1251fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x125200: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x125200u;
    {
        const bool branch_taken_0x125200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125200u;
        // 0x125204: 0x2041021  addu        $v0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125200) {
            ctx->pc = 0x125214u;
            goto label_125214;
        }
    }
    ctx->pc = 0x125208u;
label_125208:
    // 0x125208: 0xa0560244  sb          $s6, 0x244($v0)
    ctx->pc = 0x125208u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 580), (uint8_t)GPR_U32(ctx, 22));
    // 0x12520c: 0x8e83a9d4  lw          $v1, -0x562C($s4)
    ctx->pc = 0x12520cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294945236)));
    // 0x125210: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x125210u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_125214:
    // 0x125214: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x125214u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125218: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x125218u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12521c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12521cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125220: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x125220u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x125224: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x125224u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x125228: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x125228u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12522c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x12522cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x125230: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x125230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x125234: 0x3e00008  jr          $ra
    ctx->pc = 0x125234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125234u;
        // 0x125238: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12523Cu;
    // 0x12523c: 0x0  nop
    ctx->pc = 0x12523cu;
    // NOP
    ctx->pc = 0x125240u;
}
