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

// Function: sub_001B70A0
// Address: 0x1b70a0 - 0x1b7238
void sub_001B70A0_0x1b70a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B70A0_0x1b70a0");
#endif

    ctx->pc = 0x1b70a0u;

    // 0x1b70a0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1b70a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b70a4: 0xdce200c8  ld          $v0, 0xC8($a3)
    ctx->pc = 0x1b70a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 200)));
    // 0x1b70a8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B70A8u;
    {
        const bool branch_taken_0x1b70a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b70a8) {
            ctx->pc = 0x1B70ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B70A8u;
            // 0x1b70ac: 0x8ce40084  lw          $a0, 0x84($a3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B70B8u;
            goto label_1b70b8;
        }
    }
    ctx->pc = 0x1B70B0u;
    // 0x1b70b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B70B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B70B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B70B0u;
        // 0x1b70b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B70B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B70B8u;
label_1b70b8:
    // 0x1b70b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b70b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b70bc: 0x8ce2011c  lw          $v0, 0x11C($a3)
    ctx->pc = 0x1b70bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 284)));
    // 0x1b70c0: 0x8c830338  lw          $v1, 0x338($a0)
    ctx->pc = 0x1b70c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 824)));
    // 0x1b70c4: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x1b70c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b70c8: 0x2c820006  sltiu       $v0, $a0, 0x6
    ctx->pc = 0x1b70c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1b70cc: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1B70CCu;
    {
        const bool branch_taken_0x1b70cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B70D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B70CCu;
        // 0x1b70d0: 0x8c6500d4  lw          $a1, 0xD4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b70cc) {
            ctx->pc = 0x1B7158u;
            goto label_1b7158;
        }
    }
    ctx->pc = 0x1B70D4u;
    // 0x1b70d4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1b70d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1b70d8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1b70d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1b70dc: 0x2442c630  addiu       $v0, $v0, -0x39D0
    ctx->pc = 0x1b70dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952496));
    // 0x1b70e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b70e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b70e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1b70e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b70e8: 0x800008  jr          $a0
    ctx->pc = 0x1B70E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B70F0u: goto label_1b70f0;
            case 0x1B70FCu: goto label_1b70fc;
            case 0x1B7104u: goto label_1b7104;
            case 0x1B710Cu: goto label_1b710c;
            case 0x1B711Cu: goto label_1b711c;
            case 0x1B713Cu: goto label_1b713c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B70E8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1B70F0u;
label_1b70f0:
    // 0x1b70f0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1b70f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b70f4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1B70F4u;
    {
        const bool branch_taken_0x1b70f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B70F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B70F4u;
        // 0x1b70f8: 0x5300b  movn        $a2, $zero, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b70f4) {
            ctx->pc = 0x1B7158u;
            goto label_1b7158;
        }
    }
    ctx->pc = 0x1B70FCu;
label_1b70fc:
    // 0x1b70fc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1B70FCu;
    {
        const bool branch_taken_0x1b70fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B70FCu;
        // 0x1b7100: 0x2ca60001  sltiu       $a2, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b70fc) {
            ctx->pc = 0x1B7158u;
            goto label_1b7158;
        }
    }
    ctx->pc = 0x1B7104u;
label_1b7104:
    // 0x1b7104: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1B7104u;
    {
        const bool branch_taken_0x1b7104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7104u;
        // 0x1b7108: 0x2ca60002  sltiu       $a2, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7104) {
            ctx->pc = 0x1B7158u;
            goto label_1b7158;
        }
    }
    ctx->pc = 0x1B710Cu;
label_1b710c:
    // 0x1b710c: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x1B710Cu;
    {
        const bool branch_taken_0x1b710c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B710Cu;
        // 0x1b7110: 0x38a20001  xori        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b710c) {
            ctx->pc = 0x1B7148u;
            goto label_1b7148;
        }
    }
    ctx->pc = 0x1B7114u;
    // 0x1b7114: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B7114u;
    {
        const bool branch_taken_0x1b7114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7114u;
        // 0x1b7118: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7114) {
            ctx->pc = 0x1B7154u;
            goto label_1b7154;
        }
    }
    ctx->pc = 0x1B711Cu;
label_1b711c:
    // 0x1b711c: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x1b711cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b7120: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1B7120u;
    {
        const bool branch_taken_0x1b7120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7120) {
            ctx->pc = 0x1B7124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7120u;
            // 0x1b7124: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7158u;
            goto label_1b7158;
        }
    }
    ctx->pc = 0x1B7128u;
    // 0x1b7128: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b7128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b712c: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B712Cu;
    {
        const bool branch_taken_0x1b712c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b712c) {
            ctx->pc = 0x1B7158u;
            goto label_1b7158;
        }
    }
    ctx->pc = 0x1B7134u;
    // 0x1b7134: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B7134u;
    {
        const bool branch_taken_0x1b7134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7134u;
        // 0x1b7138: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7134) {
            ctx->pc = 0x1B7158u;
            goto label_1b7158;
        }
    }
    ctx->pc = 0x1B713Cu;
label_1b713c:
    // 0x1b713c: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x1b713cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b7140: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7140u;
    {
        const bool branch_taken_0x1b7140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7140u;
        // 0x1b7144: 0x38a20003  xori        $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7140) {
            ctx->pc = 0x1B7150u;
            goto label_1b7150;
        }
    }
    ctx->pc = 0x1B7148u;
label_1b7148:
    // 0x1b7148: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7148u;
    {
        const bool branch_taken_0x1b7148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7148u;
        // 0x1b714c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7148) {
            ctx->pc = 0x1B7158u;
            goto label_1b7158;
        }
    }
    ctx->pc = 0x1B7150u;
label_1b7150:
    // 0x1b7150: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1b7150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b7154:
    // 0x1b7154: 0x2300b  movn        $a2, $zero, $v0
    ctx->pc = 0x1b7154u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
label_1b7158:
    // 0x1b7158: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7158u;
    {
        const bool branch_taken_0x1b7158 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B715Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7158u;
        // 0x1b715c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7158) {
            ctx->pc = 0x1B7168u;
            goto label_1b7168;
        }
    }
    ctx->pc = 0x1B7160u;
    // 0x1b7160: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7160u;
        // 0x1b7164: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7168u;
label_1b7168:
    // 0x1b7168: 0x14c20019  bne         $a2, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1B7168u;
    {
        const bool branch_taken_0x1b7168 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B716Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7168u;
        // 0x1b716c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7168) {
            ctx->pc = 0x1B71D0u;
            goto label_1b71d0;
        }
    }
    ctx->pc = 0x1B7170u;
    // 0x1b7170: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1b7170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
    // 0x1b7174: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B7174u;
    {
        const bool branch_taken_0x1b7174 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B7178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7174u;
        // 0x1b7178: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7174) {
            ctx->pc = 0x1B7190u;
            goto label_1b7190;
        }
    }
    ctx->pc = 0x1B717Cu;
    // 0x1b717c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b717cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b7180: 0x0  nop
    ctx->pc = 0x1b7180u;
    // NOP
    // 0x1b7184: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b7184u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b7188: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B7188u;
    {
        const bool branch_taken_0x1b7188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7188) {
            ctx->pc = 0x1B71A8u;
            goto label_1b71a8;
        }
    }
    ctx->pc = 0x1B7190u;
label_1b7190:
    // 0x1b7190: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b7190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b7194: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b7194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b7198: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b7198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b719c: 0x0  nop
    ctx->pc = 0x1b719cu;
    // NOP
    // 0x1b71a0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b71a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b71a4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1b71a4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1b71a8:
    // 0x1b71a8: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1b71a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1b71ac: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1b71acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1b71b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b71b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b71b4: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x1b71b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x1b71b8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1b71b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1b71bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b71bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b71c0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1b71c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b71c4: 0xe4e100f4  swc1        $f1, 0xF4($a3)
    ctx->pc = 0x1b71c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 244), bits); }
    // 0x1b71c8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1B71C8u;
    {
        const bool branch_taken_0x1b71c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B71CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B71C8u;
        // 0x1b71cc: 0xe4e000e4  swc1        $f0, 0xE4($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 228), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b71c8) {
            ctx->pc = 0x1B722Cu;
            goto label_1b722c;
        }
    }
    ctx->pc = 0x1B71D0u;
label_1b71d0:
    // 0x1b71d0: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1b71d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
    // 0x1b71d4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B71D4u;
    {
        const bool branch_taken_0x1b71d4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B71D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B71D4u;
        // 0x1b71d8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b71d4) {
            ctx->pc = 0x1B71F0u;
            goto label_1b71f0;
        }
    }
    ctx->pc = 0x1B71DCu;
    // 0x1b71dc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b71dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b71e0: 0x0  nop
    ctx->pc = 0x1b71e0u;
    // NOP
    // 0x1b71e4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b71e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b71e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B71E8u;
    {
        const bool branch_taken_0x1b71e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b71e8) {
            ctx->pc = 0x1B7208u;
            goto label_1b7208;
        }
    }
    ctx->pc = 0x1B71F0u;
label_1b71f0:
    // 0x1b71f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b71f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b71f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b71f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b71f8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b71f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b71fc: 0x0  nop
    ctx->pc = 0x1b71fcu;
    // NOP
    // 0x1b7200: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b7200u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b7204: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1b7204u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1b7208:
    // 0x1b7208: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1b7208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1b720c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1b720cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1b7210: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b7210u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7214: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x1b7214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x1b7218: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1b7218u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1b721c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b721cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7220: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1b7220u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b7224: 0xe4e100f0  swc1        $f1, 0xF0($a3)
    ctx->pc = 0x1b7224u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 240), bits); }
    // 0x1b7228: 0xe4e000e0  swc1        $f0, 0xE0($a3)
    ctx->pc = 0x1b7228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 224), bits); }
label_1b722c:
    // 0x1b722c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B722Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B722Cu;
        // 0x1b7230: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B722Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7234u;
    // 0x1b7234: 0x0  nop
    ctx->pc = 0x1b7234u;
    // NOP
    ctx->pc = 0x1b7238u;
}
