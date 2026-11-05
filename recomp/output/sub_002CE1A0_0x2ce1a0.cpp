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

// Function: sub_002CE1A0
// Address: 0x2ce1a0 - 0x2ce2a0
void sub_002CE1A0_0x2ce1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE1A0_0x2ce1a0");
#endif

    switch (ctx->pc) {
        case 0x2ce1e0u: goto label_2ce1e0;
        case 0x2ce210u: goto label_2ce210;
        case 0x2ce214u: goto label_2ce214;
        case 0x2ce224u: goto label_2ce224;
        case 0x2ce230u: goto label_2ce230;
        case 0x2ce260u: goto label_2ce260;
        default: break;
    }

    ctx->pc = 0x2ce1a0u;

    // 0x2ce1a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ce1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ce1a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ce1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ce1a8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2ce1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2ce1ac: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2ce1acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce1b0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2ce1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2ce1b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ce1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ce1b8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2ce1b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce1bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ce1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ce1c0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2ce1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2ce1c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2ce1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2ce1c8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2ce1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2ce1cc: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2CE1CCu;
    {
        const bool branch_taken_0x2ce1cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE1CCu;
        // 0x2ce1d0: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce1cc) {
            ctx->pc = 0x2CE250u;
            goto label_2ce250;
        }
    }
    ctx->pc = 0x2CE1D4u;
    // 0x2ce1d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ce1d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce1d8: 0xc0b3806  jal         func_2CE018
    ctx->pc = 0x2CE1D8u;
    SET_GPR_U32(ctx, 31, 0x2CE1E0u);
    ctx->pc = 0x2CE1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE1D8u;
    // 0x2ce1dc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE018u, 0x2CE1D8u, 0x2CE1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE1E0u;
label_2ce1e0:
    // 0x2ce1e0: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2ce1e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x2ce1e4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2ce1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ce1e8: 0x8ea6000c  lw          $a2, 0xC($s5)
    ctx->pc = 0x2ce1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x2ce1ec: 0x71182a  slt         $v1, $v1, $s1
    ctx->pc = 0x2ce1ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2ce1f0: 0x8e05b4b4  lw          $a1, -0x4B4C($s0)
    ctx->pc = 0x2ce1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948020)));
    // 0x2ce1f4: 0x262207ff  addiu       $v0, $s1, 0x7FF
    ctx->pc = 0x2ce1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2047));
    // 0x2ce1f8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2ce1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ce1fc: 0x223100b  movn        $v0, $s1, $v1
    ctx->pc = 0x2ce1fcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 17));
    // 0x2ce200: 0xc59821  addu        $s3, $a2, $a1
    ctx->pc = 0x2ce200u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2ce204: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE204u;
    {
        const bool branch_taken_0x2ce204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE204u;
        // 0x2ce208: 0x292c3  sra         $s2, $v0, 11 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce204) {
            ctx->pc = 0x2CE214u;
            goto label_2ce214;
        }
    }
    ctx->pc = 0x2CE20Cu;
    // 0x2ce20c: 0x0  nop
    ctx->pc = 0x2ce20cu;
    // NOP
label_2ce210:
    // 0x2ce210: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2ce210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2ce214:
    // 0x2ce214: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ce214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce218: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2ce218u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce21c: 0xc0b3838  jal         func_2CE0E0
    ctx->pc = 0x2CE21Cu;
    SET_GPR_U32(ctx, 31, 0x2CE224u);
    ctx->pc = 0x2CE220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE21Cu;
    // 0x2ce220: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE0E0u, 0x2CE21Cu, 0x2CE224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE224u;
label_2ce224:
    // 0x2ce224: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ce224u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce228: 0xc0b3852  jal         func_2CE148
    ctx->pc = 0x2CE228u;
    SET_GPR_U32(ctx, 31, 0x2CE230u);
    ctx->pc = 0x2CE22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE228u;
    // 0x2ce22c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE148u, 0x2CE228u, 0x2CE230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE230u;
label_2ce230:
    // 0x2ce230: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2CE230u;
    {
        const bool branch_taken_0x2ce230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce230) {
            ctx->pc = 0x2CE234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE230u;
            // 0x2ce234: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE214u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ce214;
        }
    }
    ctx->pc = 0x2CE238u;
    // 0x2ce238: 0x1220fff5  beqz        $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2CE238u;
    {
        const bool branch_taken_0x2ce238 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE238u;
        // 0x2ce23c: 0x8e02b4b4  lw          $v0, -0x4B4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948020)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce238) {
            ctx->pc = 0x2CE210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ce210;
        }
    }
    ctx->pc = 0x2CE240u;
    // 0x2ce240: 0x121ac0  sll         $v1, $s2, 11
    ctx->pc = 0x2ce240u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 11));
    // 0x2ce244: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2ce244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2ce248: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CE248u;
    {
        const bool branch_taken_0x2ce248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE248u;
        // 0x2ce24c: 0xae02b4b4  sw          $v0, -0x4B4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294948020), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce248) {
            ctx->pc = 0x2CE264u;
            goto label_2ce264;
        }
    }
    ctx->pc = 0x2CE250u;
label_2ce250:
    // 0x2ce250: 0x8ea40034  lw          $a0, 0x34($s5)
    ctx->pc = 0x2ce250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x2ce254: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ce254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce258: 0xc0f3a04  jal         func_3CE810
    ctx->pc = 0x2CE258u;
    SET_GPR_U32(ctx, 31, 0x2CE260u);
    ctx->pc = 0x2CE25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE258u;
    // 0x2ce25c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CE810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CE810u, 0x2CE258u, 0x2CE260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE260u;
label_2ce260:
    // 0x2ce260: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ce260u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce264:
    // 0x2ce264: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CE264u;
    {
        const bool branch_taken_0x2ce264 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2CE268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE264u;
        // 0x2ce268: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce264) {
            ctx->pc = 0x2CE278u;
            goto label_2ce278;
        }
    }
    ctx->pc = 0x2CE26Cu;
    // 0x2ce26c: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x2ce26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x2ce270: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ce270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ce274: 0xaea20008  sw          $v0, 0x8($s5)
    ctx->pc = 0x2ce274u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
label_2ce278:
    // 0x2ce278: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2ce278u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce27c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ce27cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ce280: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ce280u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce284: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ce284u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ce288: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2ce288u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ce28c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2ce28cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ce290: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ce290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ce294: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE294u;
        // 0x2ce298: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CE29Cu;
    // 0x2ce29c: 0x0  nop
    ctx->pc = 0x2ce29cu;
    // NOP
    ctx->pc = 0x2ce2a0u;
}
