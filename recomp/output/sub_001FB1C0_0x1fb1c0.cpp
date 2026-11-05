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

// Function: sub_001FB1C0
// Address: 0x1fb1c0 - 0x1fb2c0
void sub_001FB1C0_0x1fb1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB1C0_0x1fb1c0");
#endif

    switch (ctx->pc) {
        case 0x1fb248u: goto label_1fb248;
        case 0x1fb270u: goto label_1fb270;
        default: break;
    }

    ctx->pc = 0x1fb1c0u;

    // 0x1fb1c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fb1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1fb1c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fb1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fb1c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fb1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fb1cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fb1ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb1d0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1fb1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1fb1d4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1fb1d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb1d8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1fb1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1fb1dc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1fb1dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb1e0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1fb1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1fb1e4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1fb1e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb1e8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1fb1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1fb1ec: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x1fb1ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb1f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fb1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fb1f4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1fb1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1fb1f8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1fb1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fb1fc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1FB1FCu;
    {
        const bool branch_taken_0x1fb1fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB1FCu;
        // 0x1fb200: 0x120b02d  daddu       $s6, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb1fc) {
            ctx->pc = 0x1FB278u;
            goto label_1fb278;
        }
    }
    ctx->pc = 0x1FB204u;
    // 0x1fb204: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1fb204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1fb208: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1fb208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1fb20c: 0x8c831340  lw          $v1, 0x1340($a0)
    ctx->pc = 0x1fb20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4928)));
    // 0x1fb210: 0x460001a  bltz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1FB210u;
    {
        const bool branch_taken_0x1fb210 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1FB214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB210u;
        // 0x1fb214: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb210) {
            ctx->pc = 0x1FB27Cu;
            goto label_1fb27c;
        }
    }
    ctx->pc = 0x1FB218u;
    // 0x1fb218: 0x8c8215e8  lw          $v0, 0x15E8($a0)
    ctx->pc = 0x1fb218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5608)));
    // 0x1fb21c: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1FB21Cu;
    {
        const bool branch_taken_0x1fb21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB21Cu;
        // 0x1fb220: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb21c) {
            ctx->pc = 0x1FB27Cu;
            goto label_1fb27c;
        }
    }
    ctx->pc = 0x1FB224u;
    // 0x1fb224: 0x908212e0  lbu         $v0, 0x12E0($a0)
    ctx->pc = 0x1fb224u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4832)));
    // 0x1fb228: 0x2c420014  sltiu       $v0, $v0, 0x14
    ctx->pc = 0x1fb228u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x1fb22c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FB22Cu;
    {
        const bool branch_taken_0x1fb22c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB22Cu;
        // 0x1fb230: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb22c) {
            ctx->pc = 0x1FB27Cu;
            goto label_1fb27c;
        }
    }
    ctx->pc = 0x1FB234u;
    // 0x1fb234: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FB234u;
    {
        const bool branch_taken_0x1fb234 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB234u;
        // 0x1fb238: 0x341092f0  ori         $s0, $zero, 0x92F0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37616);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb234) {
            ctx->pc = 0x1FB27Cu;
            goto label_1fb27c;
        }
    }
    ctx->pc = 0x1FB23Cu;
    // 0x1fb23c: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x1fb23cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1fb240: 0xc07e85c  jal         func_1FA170
    ctx->pc = 0x1FB240u;
    SET_GPR_U32(ctx, 31, 0x1FB248u);
    ctx->pc = 0x1FB244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB240u;
    // 0x1fb244: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA170u, 0x1FB240u, 0x1FB248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB248u;
label_1fb248:
    // 0x1fb248: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1fb248u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fb24c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fb24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb250: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fb250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb254: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1fb254u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb258: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1fb258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1fb25c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1fb25cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb260: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1fb260u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fb264: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x1fb264u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb268: 0xc07ebba  jal         func_1FAEE8
    ctx->pc = 0x1FB268u;
    SET_GPR_U32(ctx, 31, 0x1FB270u);
    ctx->pc = 0x1FB26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB268u;
    // 0x1fb26c: 0x2c0482d  daddu       $t1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAEE8u, 0x1FB268u, 0x1FB270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB270u;
label_1fb270:
    // 0x1fb270: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FB270u;
    {
        const bool branch_taken_0x1fb270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB270u;
        // 0x1fb274: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb270) {
            ctx->pc = 0x1FB280u;
            goto label_1fb280;
        }
    }
    ctx->pc = 0x1FB278u;
label_1fb278:
    // 0x1fb278: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fb278u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fb27c:
    // 0x1fb27c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fb27cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fb280:
    // 0x1fb280: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fb280u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fb284: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fb284u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fb288: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fb288u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fb28c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1fb28cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fb290: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1fb290u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fb294: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1fb294u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fb298: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1fb298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1fb29c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB29Cu;
        // 0x1fb2a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB29Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB2A4u;
    // 0x1fb2a4: 0x0  nop
    ctx->pc = 0x1fb2a4u;
    // NOP
    // 0x1fb2a8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1fb2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fb2ac: 0x0  nop
    ctx->pc = 0x1fb2acu;
    // NOP
    // 0x1fb2b0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1fb2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1fb2b4: 0x0  nop
    ctx->pc = 0x1fb2b4u;
    // NOP
    // 0x1fb2b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fb2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb2bc: 0x0  nop
    ctx->pc = 0x1fb2bcu;
    // NOP
    ctx->pc = 0x1fb2c0u;
}
