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

// Function: sub_0020DED0
// Address: 0x20ded0 - 0x20df60
void sub_0020DED0_0x20ded0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020DED0_0x20ded0");
#endif

    switch (ctx->pc) {
        case 0x20defcu: goto label_20defc;
        case 0x20df18u: goto label_20df18;
        case 0x20df20u: goto label_20df20;
        case 0x20df4cu: goto label_20df4c;
        default: break;
    }

    ctx->pc = 0x20ded0u;

    // 0x20ded0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20ded0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20ded4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20ded4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20ded8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20ded8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20dedc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20dedcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dee0: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x20dee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x20dee4: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x20dee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x20dee8: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x20DEE8u;
    {
        const bool branch_taken_0x20dee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20dee8) {
            ctx->pc = 0x20DEECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DEE8u;
            // 0x20deec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DF54u;
            goto label_20df54;
        }
    }
    ctx->pc = 0x20DEF0u;
    // 0x20def0: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x20def0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x20def4: 0xc08727e  jal         func_21C9F8
    ctx->pc = 0x20DEF4u;
    SET_GPR_U32(ctx, 31, 0x20DEFCu);
    ctx->pc = 0x20DEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DEF4u;
    // 0x20def8: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C9F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C9F8u, 0x20DEF4u, 0x20DEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DEFCu;
label_20defc:
    // 0x20defc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20DEFCu;
    {
        const bool branch_taken_0x20defc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DEFCu;
        // 0x20df00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20defc) {
            ctx->pc = 0x20DF10u;
            goto label_20df10;
        }
    }
    ctx->pc = 0x20DF04u;
    // 0x20df04: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x20df04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x20df08: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x20df08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x20df0c: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x20df0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
label_20df10:
    // 0x20df10: 0xc0cda26  jal         func_336898
    ctx->pc = 0x20DF10u;
    SET_GPR_U32(ctx, 31, 0x20DF18u);
    ctx->pc = 0x20DF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DF10u;
    // 0x20df14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x20DF10u, 0x20DF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DF18u;
label_20df18:
    // 0x20df18: 0xc0871e2  jal         func_21C788
    ctx->pc = 0x20DF18u;
    SET_GPR_U32(ctx, 31, 0x20DF20u);
    ctx->pc = 0x20DF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DF18u;
    // 0x20df1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C788u, 0x20DF18u, 0x20DF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DF20u;
label_20df20:
    // 0x20df20: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x20df20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x20df24: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x20DF24u;
    {
        const bool branch_taken_0x20df24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20df24) {
            ctx->pc = 0x20DF28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DF24u;
            // 0x20df28: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DF54u;
            goto label_20df54;
        }
    }
    ctx->pc = 0x20DF2Cu;
    // 0x20df2c: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x20df2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x20df30: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x20df30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x20df34: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x20df34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x20df38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20df38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20df3c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x20df3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x20df40: 0x24843520  addiu       $a0, $a0, 0x3520
    ctx->pc = 0x20df40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13600));
    // 0x20df44: 0xc0f7676  jal         func_3DD9D8
    ctx->pc = 0x20DF44u;
    SET_GPR_U32(ctx, 31, 0x20DF4Cu);
    ctx->pc = 0x20DF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DF44u;
    // 0x20df48: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD9D8u, 0x20DF44u, 0x20DF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DF4Cu;
label_20df4c:
    // 0x20df4c: 0xae02011c  sw          $v0, 0x11C($s0)
    ctx->pc = 0x20df4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
    // 0x20df50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20df50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20df54:
    // 0x20df54: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20df54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20df58: 0x3e00008  jr          $ra
    ctx->pc = 0x20DF58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DF58u;
        // 0x20df5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DF58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20DF60u;
}
