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

// Function: sub_002781B8
// Address: 0x2781b8 - 0x278298
void sub_002781B8_0x2781b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002781B8_0x2781b8");
#endif

    switch (ctx->pc) {
        case 0x2781d4u: goto label_2781d4;
        case 0x278200u: goto label_278200;
        case 0x278258u: goto label_278258;
        case 0x278284u: goto label_278284;
        default: break;
    }

    ctx->pc = 0x2781b8u;

    // 0x2781b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2781b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2781bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2781bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2781c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2781c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2781c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2781c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2781c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2781c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2781cc: 0xc09e062  jal         func_278188
    ctx->pc = 0x2781CCu;
    SET_GPR_U32(ctx, 31, 0x2781D4u);
    ctx->pc = 0x2781D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2781CCu;
    // 0x2781d0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278188u, 0x2781CCu, 0x2781D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2781D4u;
label_2781d4:
    // 0x2781d4: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x2781d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x2781d8: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x2781d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2781dc: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2781dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2781e0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2781e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2781e4: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x2781e4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2781e8: 0x50830005  beql        $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2781E8u;
    {
        const bool branch_taken_0x2781e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2781e8) {
            ctx->pc = 0x2781ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2781E8u;
            // 0x2781ec: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278200u;
            goto label_278200;
        }
    }
    ctx->pc = 0x2781F0u;
    // 0x2781f0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2781f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2781f4: 0x1482000e  bne         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2781F4u;
    {
        const bool branch_taken_0x2781f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2781F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2781F4u;
        // 0x2781f8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2781f4) {
            ctx->pc = 0x278230u;
            goto label_278230;
        }
    }
    ctx->pc = 0x2781FCu;
    // 0x2781fc: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x2781fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_278200:
    // 0x278200: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x278200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x278204: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x278204u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278208: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x278208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x27820c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27820cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x278210: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x278210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x278214: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x278214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x278218: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x278218u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27821c: 0x5064fff8  beql        $v1, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x27821Cu;
    {
        const bool branch_taken_0x27821c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x27821c) {
            ctx->pc = 0x278220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27821Cu;
            // 0x278220: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278200;
        }
    }
    ctx->pc = 0x278224u;
    // 0x278224: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x278224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x278228: 0x5062fff5  beql        $v1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x278228u;
    {
        const bool branch_taken_0x278228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x278228) {
            ctx->pc = 0x27822Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278228u;
            // 0x27822c: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278200;
        }
    }
    ctx->pc = 0x278230u;
label_278230:
    // 0x278230: 0x8e040114  lw          $a0, 0x114($s0)
    ctx->pc = 0x278230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x278234: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x278234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x278238: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x278238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x27823c: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x27823cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x278240: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x278240u;
    {
        const bool branch_taken_0x278240 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x278244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278240u;
        // 0x278244: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278240) {
            ctx->pc = 0x278278u;
            goto label_278278;
        }
    }
    ctx->pc = 0x278248u;
    // 0x278248: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x278248u;
    {
        const bool branch_taken_0x278248 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x27824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278248u;
        // 0x27824c: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278248) {
            ctx->pc = 0x278278u;
            goto label_278278;
        }
    }
    ctx->pc = 0x278250u;
    // 0x278250: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x278250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x278254: 0x0  nop
    ctx->pc = 0x278254u;
    // NOP
label_278258:
    // 0x278258: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x278258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x27825c: 0xae030114  sw          $v1, 0x114($s0)
    ctx->pc = 0x27825cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 3));
    // 0x278260: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x278260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x278264: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x278264u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x278268: 0x10470004  beq         $v0, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x278268u;
    {
        const bool branch_taken_0x278268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x27826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278268u;
        // 0x27826c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278268) {
            ctx->pc = 0x27827Cu;
            goto label_27827c;
        }
    }
    ctx->pc = 0x278270u;
    // 0x278270: 0x1445fff9  bne         $v0, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x278270u;
    {
        const bool branch_taken_0x278270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x278274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278270u;
        // 0x278274: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278270) {
            ctx->pc = 0x278258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278258;
        }
    }
    ctx->pc = 0x278278u;
label_278278:
    // 0x278278: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27827c:
    // 0x27827c: 0xc09e062  jal         func_278188
    ctx->pc = 0x27827Cu;
    SET_GPR_U32(ctx, 31, 0x278284u);
    ctx->pc = 0x278280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27827Cu;
    // 0x278280: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278188u, 0x27827Cu, 0x278284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278284u;
label_278284:
    // 0x278284: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x278284u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278288: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x278288u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27828c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27828cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278290: 0x3e00008  jr          $ra
    ctx->pc = 0x278290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278290u;
        // 0x278294: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278298u;
}
