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

// Function: sub_00121AA8
// Address: 0x121aa8 - 0x121b18
void sub_00121AA8_0x121aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121AA8_0x121aa8");
#endif

    switch (ctx->pc) {
        case 0x121ad0u: goto label_121ad0;
        case 0x121ae0u: goto label_121ae0;
        case 0x121af4u: goto label_121af4;
        default: break;
    }

    ctx->pc = 0x121aa8u;

    // 0x121aa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x121aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x121aac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x121aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x121ab0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x121ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x121ab4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x121ab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121ab8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x121ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x121abc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x121abcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121ac0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x121ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x121ac4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x121ac4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121ac8: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x121AC8u;
    SET_GPR_U32(ctx, 31, 0x121AD0u);
    ctx->pc = 0x121ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121AC8u;
    // 0x121acc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x121AC8u, 0x121AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121AD0u;
label_121ad0:
    // 0x121ad0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x121AD0u;
    {
        const bool branch_taken_0x121ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121AD0u;
        // 0x121ad4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121ad0) {
            ctx->pc = 0x121B00u;
            goto label_121b00;
        }
    }
    ctx->pc = 0x121AD8u;
    // 0x121ad8: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x121AD8u;
    SET_GPR_U32(ctx, 31, 0x121AE0u);
    ctx->pc = 0x121ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121AD8u;
    // 0x121adc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x121AD8u, 0x121AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121AE0u;
label_121ae0:
    // 0x121ae0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x121AE0u;
    {
        const bool branch_taken_0x121ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121AE0u;
        // 0x121ae4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121ae0) {
            ctx->pc = 0x121AFCu;
            goto label_121afc;
        }
    }
    ctx->pc = 0x121AE8u;
    // 0x121ae8: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x121ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x121aec: 0xc04269a  jal         func_109A68
    ctx->pc = 0x121AECu;
    SET_GPR_U32(ctx, 31, 0x121AF4u);
    ctx->pc = 0x121AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121AECu;
    // 0x121af0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109A68u, 0x121AECu, 0x121AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121AF4u;
label_121af4:
    // 0x121af4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x121AF4u;
    {
        const bool branch_taken_0x121af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121AF4u;
        // 0x121af8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121af4) {
            ctx->pc = 0x121B04u;
            goto label_121b04;
        }
    }
    ctx->pc = 0x121AFCu;
label_121afc:
    // 0x121afc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x121afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_121b00:
    // 0x121b00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x121b00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_121b04:
    // 0x121b04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x121b04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x121b08: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x121b08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x121b0c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x121b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x121b10: 0x3e00008  jr          $ra
    ctx->pc = 0x121B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B10u;
        // 0x121b14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121B18u;
}
