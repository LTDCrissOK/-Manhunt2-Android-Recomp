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

// Function: sub_00105200
// Address: 0x105200 - 0x105288
void sub_00105200_0x105200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105200_0x105200");
#endif

    switch (ctx->pc) {
        case 0x105230u: goto label_105230;
        case 0x105238u: goto label_105238;
        case 0x105250u: goto label_105250;
        default: break;
    }

    ctx->pc = 0x105200u;

    // 0x105200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x105200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x105204: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x105204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x105208: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x105208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10520c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x10520cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105210: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x105210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x105214: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x105214u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105218: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x105218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x10521c: 0x92220022  lbu         $v0, 0x22($s1)
    ctx->pc = 0x10521cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x105220: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x105220u;
    {
        const bool branch_taken_0x105220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105220u;
        // 0x105224: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105220) {
            ctx->pc = 0x105268u;
            goto label_105268;
        }
    }
    ctx->pc = 0x105228u;
    // 0x105228: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x105228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10522c: 0x0  nop
    ctx->pc = 0x10522cu;
    // NOP
label_105230:
    // 0x105230: 0xc04147a  jal         func_1051E8
    ctx->pc = 0x105230u;
    SET_GPR_U32(ctx, 31, 0x105238u);
    ctx->pc = 0x105234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105230u;
    // 0x105234: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x105230u, 0x105238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105238u;
label_105238:
    // 0x105238: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x105238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10523c: 0x54720006  bnel        $v1, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x10523Cu;
    {
        const bool branch_taken_0x10523c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x10523c) {
            ctx->pc = 0x105240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10523Cu;
            // 0x105240: 0x92220022  lbu         $v0, 0x22($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105258u;
            goto label_105258;
        }
    }
    ctx->pc = 0x105244u;
    // 0x105244: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x105244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105248: 0xc04147a  jal         func_1051E8
    ctx->pc = 0x105248u;
    SET_GPR_U32(ctx, 31, 0x105250u);
    ctx->pc = 0x10524Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105248u;
    // 0x10524c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x105248u, 0x105250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105250u;
label_105250:
    // 0x105250: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x105250u;
    {
        const bool branch_taken_0x105250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105250u;
        // 0x105254: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105250) {
            ctx->pc = 0x105270u;
            goto label_105270;
        }
    }
    ctx->pc = 0x105258u;
label_105258:
    // 0x105258: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x105258u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x10525c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x10525cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x105260: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x105260u;
    {
        const bool branch_taken_0x105260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x105264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105260u;
        // 0x105264: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105260) {
            ctx->pc = 0x105230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105230;
        }
    }
    ctx->pc = 0x105268u;
label_105268:
    // 0x105268: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x105268u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10526c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10526cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_105270:
    // 0x105270: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x105270u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x105274: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x105274u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105278: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x105278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10527c: 0x3e00008  jr          $ra
    ctx->pc = 0x10527Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10527Cu;
        // 0x105280: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10527Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105284u;
    // 0x105284: 0x0  nop
    ctx->pc = 0x105284u;
    // NOP
    ctx->pc = 0x105288u;
}
