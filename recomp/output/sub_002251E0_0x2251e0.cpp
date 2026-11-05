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

// Function: sub_002251E0
// Address: 0x2251e0 - 0x225240
void sub_002251E0_0x2251e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002251E0_0x2251e0");
#endif

    switch (ctx->pc) {
        case 0x225208u: goto label_225208;
        case 0x225214u: goto label_225214;
        case 0x225228u: goto label_225228;
        default: break;
    }

    ctx->pc = 0x2251e0u;

label_2251e0:
    // 0x2251e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2251e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2251e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2251e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2251e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2251e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2251ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2251ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2251f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2251f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2251f4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2251f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2251f8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2251F8u;
    {
        const bool branch_taken_0x2251f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2251FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2251F8u;
        // 0x2251fc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2251f8) {
            ctx->pc = 0x225208u;
            goto label_225208;
        }
    }
    ctx->pc = 0x225200u;
    // 0x225200: 0xc089478  jal         func_2251E0
    ctx->pc = 0x225200u;
    SET_GPR_U32(ctx, 31, 0x225208u);
    ctx->pc = 0x225204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225200u;
    // 0x225204: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2251E0u;
    goto label_2251e0;
    ctx->pc = 0x225208u;
label_225208:
    // 0x225208: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x225208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x22520c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x22520Cu;
    SET_GPR_U32(ctx, 31, 0x225214u);
    ctx->pc = 0x225210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22520Cu;
    // 0x225210: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x22520Cu, 0x225214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225214u;
label_225214:
    // 0x225214: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x225214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x225218: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x225218u;
    {
        const bool branch_taken_0x225218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x225218) {
            ctx->pc = 0x22521Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225218u;
            // 0x22521c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22522Cu;
            goto label_22522c;
        }
    }
    ctx->pc = 0x225220u;
    // 0x225220: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x225220u;
    SET_GPR_U32(ctx, 31, 0x225228u);
    ctx->pc = 0x225224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225220u;
    // 0x225224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x225220u, 0x225228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225228u;
label_225228:
    // 0x225228: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x225228u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22522c:
    // 0x22522c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22522cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x225230: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x225230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225234: 0x3e00008  jr          $ra
    ctx->pc = 0x225234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225234u;
        // 0x225238: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22523Cu;
    // 0x22523c: 0x0  nop
    ctx->pc = 0x22523cu;
    // NOP
    ctx->pc = 0x225240u;
}
