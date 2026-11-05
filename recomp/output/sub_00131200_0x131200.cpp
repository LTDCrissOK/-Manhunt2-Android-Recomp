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

// Function: sub_00131200
// Address: 0x131200 - 0x1312b0
void sub_00131200_0x131200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131200_0x131200");
#endif

    switch (ctx->pc) {
        case 0x131228u: goto label_131228;
        case 0x13124cu: goto label_13124c;
        default: break;
    }

    ctx->pc = 0x131200u;

    // 0x131200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x131200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x131204: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x131204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x131208: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x131208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13120c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13120cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x131210: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x131210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x131214: 0x8c820258  lw          $v0, 0x258($a0)
    ctx->pc = 0x131214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 600)));
    // 0x131218: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x131218u;
    {
        const bool branch_taken_0x131218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131218u;
        // 0x13121c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131218) {
            ctx->pc = 0x13129Cu;
            goto label_13129c;
        }
    }
    ctx->pc = 0x131220u;
    // 0x131220: 0xc043920  jal         func_10E480
    ctx->pc = 0x131220u;
    SET_GPR_U32(ctx, 31, 0x131228u);
    ctx->pc = 0x131224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131220u;
    // 0x131224: 0x8cb00084  lw          $s0, 0x84($a1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E480u, 0x131220u, 0x131228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131228u;
label_131228:
    // 0x131228: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x131228u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13122c: 0x5220001b  beql        $s1, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x13122Cu;
    {
        const bool branch_taken_0x13122c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x13122c) {
            ctx->pc = 0x131230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13122Cu;
            // 0x131230: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13129Cu;
            goto label_13129c;
        }
    }
    ctx->pc = 0x131234u;
    // 0x131234: 0x56000011  bnel        $s0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x131234u;
    {
        const bool branch_taken_0x131234 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x131234) {
            ctx->pc = 0x131238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131234u;
            // 0x131238: 0x8e250fec  lw          $a1, 0xFEC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4076)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13127Cu;
            goto label_13127c;
        }
    }
    ctx->pc = 0x13123Cu;
    // 0x13123c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13123cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x131240: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x131240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131244: 0xc04785a  jal         func_11E168
    ctx->pc = 0x131244u;
    SET_GPR_U32(ctx, 31, 0x13124Cu);
    ctx->pc = 0x131248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131244u;
    // 0x131248: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E168u, 0x131244u, 0x13124Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13124Cu;
label_13124c:
    // 0x13124c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x13124cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131250: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x131250u;
    {
        const bool branch_taken_0x131250 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131250) {
            ctx->pc = 0x131254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131250u;
            // 0x131254: 0x8e250fec  lw          $a1, 0xFEC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4076)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13127Cu;
            goto label_13127c;
        }
    }
    ctx->pc = 0x131258u;
    // 0x131258: 0x8c62020c  lw          $v0, 0x20C($v1)
    ctx->pc = 0x131258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x13125c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13125Cu;
    {
        const bool branch_taken_0x13125c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x131260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13125Cu;
        // 0x131260: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13125c) {
            ctx->pc = 0x131270u;
            goto label_131270;
        }
    }
    ctx->pc = 0x131264u;
    // 0x131264: 0x8c620210  lw          $v0, 0x210($v1)
    ctx->pc = 0x131264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 528)));
    // 0x131268: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x131268u;
    {
        const bool branch_taken_0x131268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13126Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131268u;
        // 0x13126c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131268) {
            ctx->pc = 0x131278u;
            goto label_131278;
        }
    }
    ctx->pc = 0x131270u;
label_131270:
    // 0x131270: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x131270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131274: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x131274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_131278:
    // 0x131278: 0x8e250fec  lw          $a1, 0xFEC($s1)
    ctx->pc = 0x131278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4076)));
label_13127c:
    // 0x13127c: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x13127Cu;
    {
        const bool branch_taken_0x13127c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13127c) {
            ctx->pc = 0x131280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13127Cu;
            // 0x131280: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13129Cu;
            goto label_13129c;
        }
    }
    ctx->pc = 0x131284u;
    // 0x131284: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x131284u;
    {
        const bool branch_taken_0x131284 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x131288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131284u;
        // 0x131288: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131284) {
            ctx->pc = 0x131294u;
            goto label_131294;
        }
    }
    ctx->pc = 0x13128Cu;
    // 0x13128c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13128Cu;
    {
        const bool branch_taken_0x13128c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13128Cu;
        // 0x131290: 0xaca20040  sw          $v0, 0x40($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13128c) {
            ctx->pc = 0x131298u;
            goto label_131298;
        }
    }
    ctx->pc = 0x131294u;
label_131294:
    // 0x131294: 0xaca00040  sw          $zero, 0x40($a1)
    ctx->pc = 0x131294u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 0));
label_131298:
    // 0x131298: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x131298u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13129c:
    // 0x13129c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13129cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1312a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1312a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1312a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1312A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1312A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1312A4u;
        // 0x1312a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1312A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1312ACu;
    // 0x1312ac: 0x0  nop
    ctx->pc = 0x1312acu;
    // NOP
    ctx->pc = 0x1312b0u;
}
