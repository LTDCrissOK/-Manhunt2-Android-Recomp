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

// Function: sub_002B4A78
// Address: 0x2b4a78 - 0x2b4b00
void sub_002B4A78_0x2b4a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4A78_0x2b4a78");
#endif

    switch (ctx->pc) {
        case 0x2b4a94u: goto label_2b4a94;
        case 0x2b4accu: goto label_2b4acc;
        case 0x2b4ae4u: goto label_2b4ae4;
        default: break;
    }

    ctx->pc = 0x2b4a78u;

    // 0x2b4a78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b4a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b4a7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b4a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b4a80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b4a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b4a84: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b4a84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4a88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b4a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b4a8c: 0xc0ad2c0  jal         func_2B4B00
    ctx->pc = 0x2B4A8Cu;
    SET_GPR_U32(ctx, 31, 0x2B4A94u);
    ctx->pc = 0x2B4A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4A8Cu;
    // 0x2b4a90: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B00u, 0x2B4A8Cu, 0x2B4A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4A94u;
label_2b4a94:
    // 0x2b4a94: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B4A94u;
    {
        const bool branch_taken_0x2b4a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A94u;
        // 0x2b4a98: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4a94) {
            ctx->pc = 0x2B4AB4u;
            goto label_2b4ab4;
        }
    }
    ctx->pc = 0x2B4A9Cu;
    // 0x2b4a9c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b4a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b4aa0: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x2b4aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2b4aa4: 0x24a5fa18  addiu       $a1, $a1, -0x5E8
    ctx->pc = 0x2b4aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965784));
    // 0x2b4aa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b4aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4aac: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2B4AACu;
    {
        const bool branch_taken_0x2b4aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4AACu;
        // 0x2b4ab0: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4aac) {
            ctx->pc = 0x2B4ADCu;
            goto label_2b4adc;
        }
    }
    ctx->pc = 0x2B4AB4u;
label_2b4ab4:
    // 0x2b4ab4: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x2b4ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2b4ab8: 0x2442fa18  addiu       $v0, $v0, -0x5E8
    ctx->pc = 0x2b4ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965784));
    // 0x2b4abc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b4abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4ac0: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x2b4ac0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b4ac4: 0xc0ad280  jal         func_2B4A00
    ctx->pc = 0x2B4AC4u;
    SET_GPR_U32(ctx, 31, 0x2B4ACCu);
    ctx->pc = 0x2B4AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4AC4u;
    // 0x2b4ac8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A00u, 0x2B4AC4u, 0x2B4ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4ACCu;
label_2b4acc:
    // 0x2b4acc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B4ACCu;
    {
        const bool branch_taken_0x2b4acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4ACCu;
        // 0x2b4ad0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4acc) {
            ctx->pc = 0x2B4AE8u;
            goto label_2b4ae8;
        }
    }
    ctx->pc = 0x2B4AD4u;
    // 0x2b4ad4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b4ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4ad8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b4ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b4adc:
    // 0x2b4adc: 0xc0ad210  jal         func_2B4840
    ctx->pc = 0x2B4ADCu;
    SET_GPR_U32(ctx, 31, 0x2B4AE4u);
    ctx->pc = 0x2B4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4840u, 0x2B4ADCu, 0x2B4AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4AE4u;
label_2b4ae4:
    // 0x2b4ae4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b4ae4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b4ae8:
    // 0x2b4ae8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b4ae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4aec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b4aecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4af0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b4af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4af4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4AF4u;
        // 0x2b4af8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4AFCu;
    // 0x2b4afc: 0x0  nop
    ctx->pc = 0x2b4afcu;
    // NOP
    ctx->pc = 0x2b4b00u;
}
