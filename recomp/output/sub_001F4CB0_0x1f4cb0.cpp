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

// Function: sub_001F4CB0
// Address: 0x1f4cb0 - 0x1f4d80
void sub_001F4CB0_0x1f4cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4CB0_0x1f4cb0");
#endif

    switch (ctx->pc) {
        case 0x1f4cd0u: goto label_1f4cd0;
        default: break;
    }

    ctx->pc = 0x1f4cb0u;

    // 0x1f4cb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f4cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f4cb4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f4cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4cb8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f4cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f4cbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f4cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f4cc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f4cc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4cc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f4cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f4cc8: 0xc07d3c8  jal         func_1F4F20
    ctx->pc = 0x1F4CC8u;
    SET_GPR_U32(ctx, 31, 0x1F4CD0u);
    ctx->pc = 0x1F4CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4CC8u;
    // 0x1f4ccc: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4F20u, 0x1F4CC8u, 0x1F4CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4CD0u;
label_1f4cd0:
    // 0x1f4cd0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f4cd0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4cd4: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1f4cd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1f4cd8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1F4CD8u;
    {
        const bool branch_taken_0x1f4cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4CD8u;
        // 0x1f4cdc: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4cd8) {
            ctx->pc = 0x1F4D34u;
            goto label_1f4d34;
        }
    }
    ctx->pc = 0x1F4CE0u;
    // 0x1f4ce0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f4ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f4ce4: 0x2442f8b0  addiu       $v0, $v0, -0x750
    ctx->pc = 0x1f4ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965424));
    // 0x1f4ce8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f4ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f4cec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1f4cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f4cf0: 0x800008  jr          $a0
    ctx->pc = 0x1F4CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F4CF8u: goto label_1f4cf8;
            case 0x1F4D04u: goto label_1f4d04;
            case 0x1F4D10u: goto label_1f4d10;
            case 0x1F4D1Cu: goto label_1f4d1c;
            case 0x1F4D28u: goto label_1f4d28;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4CF0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1F4CF8u;
label_1f4cf8:
    // 0x1f4cf8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f4cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f4cfc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1F4CFCu;
    {
        const bool branch_taken_0x1f4cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4CFCu;
        // 0x1f4d00: 0x2442f850  addiu       $v0, $v0, -0x7B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4cfc) {
            ctx->pc = 0x1F4D30u;
            goto label_1f4d30;
        }
    }
    ctx->pc = 0x1F4D04u;
label_1f4d04:
    // 0x1f4d04: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f4d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f4d08: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F4D08u;
    {
        const bool branch_taken_0x1f4d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4D08u;
        // 0x1f4d0c: 0x2442f860  addiu       $v0, $v0, -0x7A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4d08) {
            ctx->pc = 0x1F4D30u;
            goto label_1f4d30;
        }
    }
    ctx->pc = 0x1F4D10u;
label_1f4d10:
    // 0x1f4d10: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f4d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f4d14: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F4D14u;
    {
        const bool branch_taken_0x1f4d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4D14u;
        // 0x1f4d18: 0x2442f870  addiu       $v0, $v0, -0x790 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4d14) {
            ctx->pc = 0x1F4D30u;
            goto label_1f4d30;
        }
    }
    ctx->pc = 0x1F4D1Cu;
label_1f4d1c:
    // 0x1f4d1c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f4d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f4d20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F4D20u;
    {
        const bool branch_taken_0x1f4d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4D20u;
        // 0x1f4d24: 0x2442f888  addiu       $v0, $v0, -0x778 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4d20) {
            ctx->pc = 0x1F4D30u;
            goto label_1f4d30;
        }
    }
    ctx->pc = 0x1F4D28u;
label_1f4d28:
    // 0x1f4d28: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f4d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f4d2c: 0x2442f898  addiu       $v0, $v0, -0x768
    ctx->pc = 0x1f4d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965400));
label_1f4d30:
    // 0x1f4d30: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1f4d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1f4d34:
    // 0x1f4d34: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x1f4d34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x1f4d38: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1f4d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1f4d3c: 0x8cc39294  lw          $v1, -0x6D6C($a2)
    ctx->pc = 0x1f4d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F9294u));
    // 0x1f4d40: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F4D40u;
    {
        const bool branch_taken_0x1f4d40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4d40) {
            ctx->pc = 0x1F4D44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4D40u;
            // 0x1f4d44: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4D48u;
            goto label_1f4d48;
        }
    }
    ctx->pc = 0x1F4D48u;
label_1f4d48:
    // 0x1f4d48: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1f4d48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f4d4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f4d4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4d50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f4d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f4d54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f4d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f4d58: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x1f4d58u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f4d5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f4d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f4d60: 0x2010  mfhi        $a0
    ctx->pc = 0x1f4d60u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1f4d64: 0xacc49294  sw          $a0, -0x6D6C($a2)
    ctx->pc = 0x1f4d64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294939284), GPR_U32(ctx, 4));
    // 0x1f4d68: 0x94c39294  lhu         $v1, -0x6D6C($a2)
    ctx->pc = 0x1f4d68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4294939284)));
    // 0x1f4d6c: 0xae270104  sw          $a3, 0x104($s1)
    ctx->pc = 0x1f4d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 7));
    // 0x1f4d70: 0xa62300f4  sh          $v1, 0xF4($s1)
    ctx->pc = 0x1f4d70u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 244), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f4d74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f4d74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f4d78: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4D78u;
        // 0x1f4d7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4D80u;
}
