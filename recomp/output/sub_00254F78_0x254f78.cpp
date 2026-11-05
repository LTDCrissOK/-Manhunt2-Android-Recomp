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

// Function: sub_00254F78
// Address: 0x254f78 - 0x255048
void sub_00254F78_0x254f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254F78_0x254f78");
#endif

    switch (ctx->pc) {
        case 0x254fb0u: goto label_254fb0;
        case 0x254fb8u: goto label_254fb8;
        case 0x254fc4u: goto label_254fc4;
        case 0x254fdcu: goto label_254fdc;
        case 0x255028u: goto label_255028;
        case 0x255030u: goto label_255030;
        default: break;
    }

    ctx->pc = 0x254f78u;

    // 0x254f78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x254f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x254f7c: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x254f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x254f80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x254f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x254f84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x254f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x254f88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x254f88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254f8c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x254f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x254f90: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x254f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x254f94: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x254f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x254f98: 0x10430025  beq         $v0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x254F98u;
    {
        const bool branch_taken_0x254f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x254F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254F98u;
        // 0x254f9c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254f98) {
            ctx->pc = 0x255030u;
            goto label_255030;
        }
    }
    ctx->pc = 0x254FA0u;
    // 0x254fa0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x254fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x254fa4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x254fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254fa8: 0xc0484c0  jal         func_121300
    ctx->pc = 0x254FA8u;
    SET_GPR_U32(ctx, 31, 0x254FB0u);
    ctx->pc = 0x254FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254FA8u;
    // 0x254fac: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121300u, 0x254FA8u, 0x254FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254FB0u;
label_254fb0:
    // 0x254fb0: 0xc094ee8  jal         func_253BA0
    ctx->pc = 0x254FB0u;
    SET_GPR_U32(ctx, 31, 0x254FB8u);
    ctx->pc = 0x254FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254FB0u;
    // 0x254fb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253BA0u, 0x254FB0u, 0x254FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254FB8u;
label_254fb8:
    // 0x254fb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x254fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254fbc: 0xc08b6b2  jal         func_22DAC8
    ctx->pc = 0x254FBCu;
    SET_GPR_U32(ctx, 31, 0x254FC4u);
    ctx->pc = 0x254FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254FBCu;
    // 0x254fc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DAC8u, 0x254FBCu, 0x254FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254FC4u;
label_254fc4:
    // 0x254fc4: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x254fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x254fc8: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x254fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
    // 0x254fcc: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x254FCCu;
    {
        const bool branch_taken_0x254fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x254fcc) {
            ctx->pc = 0x254FD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254FCCu;
            // 0x254fd0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255034u;
            goto label_255034;
        }
    }
    ctx->pc = 0x254FD4u;
    // 0x254fd4: 0xc095e9c  jal         func_257A70
    ctx->pc = 0x254FD4u;
    SET_GPR_U32(ctx, 31, 0x254FDCu);
    ctx->pc = 0x254FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254FD4u;
    // 0x254fd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257A70u, 0x254FD4u, 0x254FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254FDCu;
label_254fdc:
    // 0x254fdc: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x254FDCu;
    {
        const bool branch_taken_0x254fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x254fdc) {
            ctx->pc = 0x254FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254FDCu;
            // 0x254fe0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255034u;
            goto label_255034;
        }
    }
    ctx->pc = 0x254FE4u;
    // 0x254fe4: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x254fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x254fe8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x254fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x254fec: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x254FECu;
    {
        const bool branch_taken_0x254fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x254fec) {
            ctx->pc = 0x254FF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254FECu;
            // 0x254ff0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255034u;
            goto label_255034;
        }
    }
    ctx->pc = 0x254FF4u;
    // 0x254ff4: 0x8e020290  lw          $v0, 0x290($s0)
    ctx->pc = 0x254ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 656)));
    // 0x254ff8: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x254FF8u;
    {
        const bool branch_taken_0x254ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x254ff8) {
            ctx->pc = 0x254FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254FF8u;
            // 0x254ffc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255034u;
            goto label_255034;
        }
    }
    ctx->pc = 0x255000u;
    // 0x255000: 0x8e041068  lw          $a0, 0x1068($s0)
    ctx->pc = 0x255000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4200)));
    // 0x255004: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x255004u;
    {
        const bool branch_taken_0x255004 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x255008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255004u;
        // 0x255008: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255004) {
            ctx->pc = 0x255034u;
            goto label_255034;
        }
    }
    ctx->pc = 0x25500Cu;
    // 0x25500c: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x25500cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x255010: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x255010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x255014: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x255014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
    // 0x255018: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x255018u;
    {
        const bool branch_taken_0x255018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255018u;
        // 0x25501c: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255018) {
            ctx->pc = 0x255038u;
            goto label_255038;
        }
    }
    ctx->pc = 0x255020u;
    // 0x255020: 0xc0c13f4  jal         func_304FD0
    ctx->pc = 0x255020u;
    SET_GPR_U32(ctx, 31, 0x255028u);
    ctx->pc = 0x304FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304FD0u, 0x255020u, 0x255028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255028u;
label_255028:
    // 0x255028: 0xc0c13ae  jal         func_304EB8
    ctx->pc = 0x255028u;
    SET_GPR_U32(ctx, 31, 0x255030u);
    ctx->pc = 0x25502Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255028u;
    // 0x25502c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304EB8u, 0x255028u, 0x255030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255030u;
label_255030:
    // 0x255030: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x255030u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_255034:
    // 0x255034: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x255034u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_255038:
    // 0x255038: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x255038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25503c: 0x3e00008  jr          $ra
    ctx->pc = 0x25503Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25503Cu;
        // 0x255040: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25503Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255044u;
    // 0x255044: 0x0  nop
    ctx->pc = 0x255044u;
    // NOP
    ctx->pc = 0x255048u;
}
