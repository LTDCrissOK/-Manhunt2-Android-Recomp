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

// Function: sub_002328E8
// Address: 0x2328e8 - 0x232a68
void sub_002328E8_0x2328e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002328E8_0x2328e8");
#endif

    switch (ctx->pc) {
        case 0x232954u: goto label_232954;
        case 0x2329d0u: goto label_2329d0;
        case 0x232a2cu: goto label_232a2c;
        default: break;
    }

    ctx->pc = 0x2328e8u;

    // 0x2328e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2328e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2328ec: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2328ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2328f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2328f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2328f4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2328f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2328f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2328f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2328fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2328fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x232900: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x232900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x232904: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x232904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x232908: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x232908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x23290c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x23290cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x232910: 0x8c43bd38  lw          $v1, -0x42C8($v0)
    ctx->pc = 0x232910u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD38u));
    // 0x232914: 0x92240fb0  lbu         $a0, 0xFB0($s1)
    ctx->pc = 0x232914u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4016)));
    // 0x232918: 0x10830047  beq         $a0, $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x232918u;
    {
        const bool branch_taken_0x232918 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x23291Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232918u;
        // 0x23291c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232918) {
            ctx->pc = 0x232A38u;
            goto label_232a38;
        }
    }
    ctx->pc = 0x232920u;
    // 0x232920: 0x8e300334  lw          $s0, 0x334($s1)
    ctx->pc = 0x232920u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x232924: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x232924u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232928: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x232928u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23292c: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x23292cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x232930: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x232930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x232934: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x232934u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x232938: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x232938u;
    {
        const bool branch_taken_0x232938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23293Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232938u;
        // 0x23293c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232938) {
            ctx->pc = 0x232974u;
            goto label_232974;
        }
    }
    ctx->pc = 0x232940u;
    // 0x232940: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x232940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x232944: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x232944u;
    {
        const bool branch_taken_0x232944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x232944) {
            ctx->pc = 0x232948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232944u;
            // 0x232948: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232978u;
            goto label_232978;
        }
    }
    ctx->pc = 0x23294Cu;
    // 0x23294c: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x23294Cu;
    SET_GPR_U32(ctx, 31, 0x232954u);
    ctx->pc = 0x232950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23294Cu;
    // 0x232950: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x23294Cu, 0x232954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232954u;
label_232954:
    // 0x232954: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x232954u;
    {
        const bool branch_taken_0x232954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x232954) {
            ctx->pc = 0x232958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232954u;
            // 0x232958: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232978u;
            goto label_232978;
        }
    }
    ctx->pc = 0x23295Cu;
    // 0x23295c: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x23295cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x232960: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x232960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x232964: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x232964u;
    {
        const bool branch_taken_0x232964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x232968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232964u;
        // 0x232968: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232964) {
            ctx->pc = 0x232974u;
            goto label_232974;
        }
    }
    ctx->pc = 0x23296Cu;
    // 0x23296c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23296Cu;
    {
        const bool branch_taken_0x23296c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23296c) {
            ctx->pc = 0x232978u;
            goto label_232978;
        }
    }
    ctx->pc = 0x232974u;
label_232974:
    // 0x232974: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x232974u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_232978:
    // 0x232978: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x232978u;
    {
        const bool branch_taken_0x232978 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x232978) {
            ctx->pc = 0x232998u;
            goto label_232998;
        }
    }
    ctx->pc = 0x232980u;
    // 0x232980: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x232980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x232984: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x232984u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x232988: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x232988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x23298c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23298cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x232990: 0x3863003d  xori        $v1, $v1, 0x3D
    ctx->pc = 0x232990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)61);
    // 0x232994: 0x2c730001  sltiu       $s3, $v1, 0x1
    ctx->pc = 0x232994u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_232998:
    // 0x232998: 0x56600021  bnel        $s3, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x232998u;
    {
        const bool branch_taken_0x232998 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x232998) {
            ctx->pc = 0x23299Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232998u;
            // 0x23299c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232A20u;
            goto label_232a20;
        }
    }
    ctx->pc = 0x2329A0u;
    // 0x2329a0: 0x8e300334  lw          $s0, 0x334($s1)
    ctx->pc = 0x2329a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x2329a4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2329a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2329a8: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2329a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2329ac: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x2329acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x2329b0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2329b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2329b4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2329B4u;
    {
        const bool branch_taken_0x2329b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2329B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2329B4u;
        // 0x2329b8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2329b4) {
            ctx->pc = 0x2329F0u;
            goto label_2329f0;
        }
    }
    ctx->pc = 0x2329BCu;
    // 0x2329bc: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x2329bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2329c0: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2329C0u;
    {
        const bool branch_taken_0x2329c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2329c0) {
            ctx->pc = 0x2329C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2329C0u;
            // 0x2329c4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2329F4u;
            goto label_2329f4;
        }
    }
    ctx->pc = 0x2329C8u;
    // 0x2329c8: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x2329C8u;
    SET_GPR_U32(ctx, 31, 0x2329D0u);
    ctx->pc = 0x2329CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2329C8u;
    // 0x2329cc: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x2329C8u, 0x2329D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2329D0u;
label_2329d0:
    // 0x2329d0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2329D0u;
    {
        const bool branch_taken_0x2329d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2329d0) {
            ctx->pc = 0x2329D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2329D0u;
            // 0x2329d4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2329F4u;
            goto label_2329f4;
        }
    }
    ctx->pc = 0x2329D8u;
    // 0x2329d8: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2329d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2329dc: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x2329dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2329e0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2329E0u;
    {
        const bool branch_taken_0x2329e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2329E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2329E0u;
        // 0x2329e4: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2329e0) {
            ctx->pc = 0x2329F0u;
            goto label_2329f0;
        }
    }
    ctx->pc = 0x2329E8u;
    // 0x2329e8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2329E8u;
    {
        const bool branch_taken_0x2329e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2329e8) {
            ctx->pc = 0x2329F4u;
            goto label_2329f4;
        }
    }
    ctx->pc = 0x2329F0u;
label_2329f0:
    // 0x2329f0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2329f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2329f4:
    // 0x2329f4: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2329F4u;
    {
        const bool branch_taken_0x2329f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2329f4) {
            ctx->pc = 0x232A14u;
            goto label_232a14;
        }
    }
    ctx->pc = 0x2329FCu;
    // 0x2329fc: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x2329fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x232a00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x232a00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x232a04: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x232a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x232a08: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x232a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x232a0c: 0x38630041  xori        $v1, $v1, 0x41
    ctx->pc = 0x232a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)65);
    // 0x232a10: 0x2c730001  sltiu       $s3, $v1, 0x1
    ctx->pc = 0x232a10u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_232a14:
    // 0x232a14: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x232A14u;
    {
        const bool branch_taken_0x232a14 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x232A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232A14u;
        // 0x232a18: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232a14) {
            ctx->pc = 0x232A24u;
            goto label_232a24;
        }
    }
    ctx->pc = 0x232A1Cu;
    // 0x232a1c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x232a1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_232a20:
    // 0x232a20: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x232a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_232a24:
    // 0x232a24: 0xc093e46  jal         func_24F918
    ctx->pc = 0x232A24u;
    SET_GPR_U32(ctx, 31, 0x232A2Cu);
    ctx->pc = 0x232A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232A24u;
    // 0x232a28: 0x262407a0  addiu       $a0, $s1, 0x7A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F918u, 0x232A24u, 0x232A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232A2Cu;
label_232a2c:
    // 0x232a2c: 0x8ea2bd38  lw          $v0, -0x42C8($s5)
    ctx->pc = 0x232a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950200)));
    // 0x232a30: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x232a30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x232a34: 0xa2220fb0  sb          $v0, 0xFB0($s1)
    ctx->pc = 0x232a34u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4016), (uint8_t)GPR_U32(ctx, 2));
label_232a38:
    // 0x232a38: 0x8e220890  lw          $v0, 0x890($s1)
    ctx->pc = 0x232a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2192)));
    // 0x232a3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x232a3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232a40: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x232a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x232a44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x232a44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x232a48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x232a48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232a4c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x232a4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x232a50: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x232a50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x232a54: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x232a54u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232a58: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x232a58u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x232a5c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x232a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x232a60: 0x3e00008  jr          $ra
    ctx->pc = 0x232A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232A60u;
        // 0x232a64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232A68u;
}
