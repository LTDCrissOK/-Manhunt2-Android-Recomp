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

// Function: sub_0028DA60
// Address: 0x28da60 - 0x28db28
void sub_0028DA60_0x28da60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028DA60_0x28da60");
#endif

    switch (ctx->pc) {
        case 0x28da94u: goto label_28da94;
        default: break;
    }

    ctx->pc = 0x28da60u;

    // 0x28da60: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x28da60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x28da64: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x28da64u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28da68: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x28da68u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28da6c: 0x8c43ca10  lw          $v1, -0x35F0($v0)
    ctx->pc = 0x28da6cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6BCA10u));
    // 0x28da70: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x28da70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28da74: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x28da74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28da78: 0xe0602d  daddu       $t4, $a3, $zero
    ctx->pc = 0x28da78u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28da7c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x28da7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28da80: 0x14680003  bne         $v1, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28DA80u;
    {
        const bool branch_taken_0x28da80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        ctx->pc = 0x28DA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA80u;
        // 0x28da84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28da80) {
            ctx->pc = 0x28DA90u;
            goto label_28da90;
        }
    }
    ctx->pc = 0x28DA88u;
    // 0x28da88: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x28DA88u;
    {
        const bool branch_taken_0x28da88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA88u;
        // 0x28da8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28da88) {
            ctx->pc = 0x28DAB8u;
            goto label_28dab8;
        }
    }
    ctx->pc = 0x28DA90u;
label_28da90:
    // 0x28da90: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x28da90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_28da94:
    // 0x28da94: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x28da94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x28da98: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28DA98u;
    {
        const bool branch_taken_0x28da98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA98u;
        // 0x28da9c: 0x2522ca10  addiu       $v0, $t1, -0x35F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294953488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28da98) {
            ctx->pc = 0x28DAB8u;
            goto label_28dab8;
        }
    }
    ctx->pc = 0x28DAA0u;
    // 0x28daa0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x28daa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x28daa4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28daa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28daa8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x28daa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28daac: 0x5488fff9  bnel        $a0, $t0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x28DAACu;
    {
        const bool branch_taken_0x28daac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 8));
        if (branch_taken_0x28daac) {
            ctx->pc = 0x28DAB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DAACu;
            // 0x28dab0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DA94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28da94;
        }
    }
    ctx->pc = 0x28DAB4u;
    // 0x28dab4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x28dab4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28dab8:
    // 0x28dab8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x28dab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28dabc: 0x10c20018  beq         $a2, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x28DABCu;
    {
        const bool branch_taken_0x28dabc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x28DAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DABCu;
        // 0x28dac0: 0x2522ca10  addiu       $v0, $t1, -0x35F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294953488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dabc) {
            ctx->pc = 0x28DB20u;
            goto label_28db20;
        }
    }
    ctx->pc = 0x28DAC4u;
    // 0x28dac4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x28dac4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x28dac8: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x28dac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x28dacc: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x28daccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x28dad0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x28dad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x28dad4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x28dad4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x28dad8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x28dad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28dadc: 0x24a5a540  addiu       $a1, $a1, -0x5AC0
    ctx->pc = 0x28dadcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944064));
    // 0x28dae0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28dae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28dae4: 0x671818  mult        $v1, $v1, $a3
    ctx->pc = 0x28dae4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x28dae8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x28dae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x28daec: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x28daecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x28daf0: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x28daf0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x28daf4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x28daf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28daf8: 0x672018  mult        $a0, $v1, $a3
    ctx->pc = 0x28daf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x28dafc: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x28dafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x28db00: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x28db00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x28db04: 0xad640000  sw          $a0, 0x0($t3)
    ctx->pc = 0x28db04u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
    // 0x28db08: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x28db08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28db0c: 0x672018  mult        $a0, $v1, $a3
    ctx->pc = 0x28db0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x28db10: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x28db10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x28db14: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x28db14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x28db18: 0x3e00008  jr          $ra
    ctx->pc = 0x28DB18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DB18u;
        // 0x28db1c: 0xad840000  sw          $a0, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DB18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28DB20u;
label_28db20:
    // 0x28db20: 0x3e00008  jr          $ra
    ctx->pc = 0x28DB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DB20u;
        // 0x28db24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DB20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28DB28u;
}
