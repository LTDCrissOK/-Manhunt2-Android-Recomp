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

// Function: sub_00121300
// Address: 0x121300 - 0x121368
void sub_00121300_0x121300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121300_0x121300");
#endif

    switch (ctx->pc) {
        case 0x121328u: goto label_121328;
        case 0x12133cu: goto label_12133c;
        case 0x121354u: goto label_121354;
        default: break;
    }

    ctx->pc = 0x121300u;

    // 0x121300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x121300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x121304: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x121304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x121308: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x121308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12130c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12130cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121310: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x121310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x121314: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x121314u;
    {
        const bool branch_taken_0x121314 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x121318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121314u;
        // 0x121318: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121314) {
            ctx->pc = 0x121354u;
            goto label_121354;
        }
    }
    ctx->pc = 0x12131Cu;
    // 0x12131c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x12131cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x121320: 0xc047860  jal         func_11E180
    ctx->pc = 0x121320u;
    SET_GPR_U32(ctx, 31, 0x121328u);
    ctx->pc = 0x121324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121320u;
    // 0x121324: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E180u, 0x121320u, 0x121328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121328u;
label_121328:
    // 0x121328: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x121328u;
    {
        const bool branch_taken_0x121328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x121328) {
            ctx->pc = 0x12132Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121328u;
            // 0x12132c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121358u;
            goto label_121358;
        }
    }
    ctx->pc = 0x121330u;
    // 0x121330: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x121330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x121334: 0xc042944  jal         func_10A510
    ctx->pc = 0x121334u;
    SET_GPR_U32(ctx, 31, 0x12133Cu);
    ctx->pc = 0x121338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121334u;
    // 0x121338: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A510u, 0x121334u, 0x12133Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12133Cu;
label_12133c:
    // 0x12133c: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x12133cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x121340: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x121340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121344: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x121344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121348: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x121348u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12134c: 0xc04a02a  jal         func_1280A8
    ctx->pc = 0x12134Cu;
    SET_GPR_U32(ctx, 31, 0x121354u);
    ctx->pc = 0x121350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12134Cu;
    // 0x121350: 0x24c60070  addiu       $a2, $a2, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1280A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1280A8u, 0x12134Cu, 0x121354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121354u;
label_121354:
    // 0x121354: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x121354u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_121358:
    // 0x121358: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x121358u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12135c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12135cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x121360: 0x3e00008  jr          $ra
    ctx->pc = 0x121360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121360u;
        // 0x121364: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121368u;
}
