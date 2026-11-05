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

// Function: sub_00135E90
// Address: 0x135e90 - 0x135f00
void sub_00135E90_0x135e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135E90_0x135e90");
#endif

    switch (ctx->pc) {
        case 0x135e90u: goto label_135e90;
        case 0x135e94u: goto label_135e94;
        case 0x135e98u: goto label_135e98;
        case 0x135e9cu: goto label_135e9c;
        case 0x135ea0u: goto label_135ea0;
        case 0x135ea4u: goto label_135ea4;
        case 0x135ea8u: goto label_135ea8;
        case 0x135eacu: goto label_135eac;
        case 0x135eb0u: goto label_135eb0;
        case 0x135eb4u: goto label_135eb4;
        case 0x135eb8u: goto label_135eb8;
        case 0x135ebcu: goto label_135ebc;
        case 0x135ec0u: goto label_135ec0;
        case 0x135ec4u: goto label_135ec4;
        case 0x135ec8u: goto label_135ec8;
        case 0x135eccu: goto label_135ecc;
        case 0x135ed0u: goto label_135ed0;
        case 0x135ed4u: goto label_135ed4;
        case 0x135ed8u: goto label_135ed8;
        case 0x135edcu: goto label_135edc;
        case 0x135ee0u: goto label_135ee0;
        case 0x135ee4u: goto label_135ee4;
        case 0x135ee8u: goto label_135ee8;
        case 0x135eecu: goto label_135eec;
        case 0x135ef0u: goto label_135ef0;
        case 0x135ef4u: goto label_135ef4;
        case 0x135ef8u: goto label_135ef8;
        case 0x135efcu: goto label_135efc;
        default: break;
    }

    ctx->pc = 0x135e90u;

label_135e90:
    // 0x135e90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x135e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_135e94:
    // 0x135e94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x135e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_135e98:
    // 0x135e98: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x135e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_135e9c:
    // 0x135e9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x135e9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_135ea0:
    // 0x135ea0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x135ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_135ea4:
    // 0x135ea4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x135ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_135ea8:
    // 0x135ea8: 0xc04f750  jal         func_13DD40
label_135eac:
    if (ctx->pc == 0x135EACu) {
        ctx->pc = 0x135EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135EA8u;
        // 0x135eac: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135EB0u;
        goto label_135eb0;
    }
    ctx->pc = 0x135EA8u;
    SET_GPR_U32(ctx, 31, 0x135EB0u);
    ctx->pc = 0x135EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135EA8u;
    // 0x135eac: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD40u, 0x135EA8u, 0x135EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135EB0u;
label_135eb0:
    // 0x135eb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x135eb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_135eb4:
    // 0x135eb4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x135eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_135eb8:
    // 0x135eb8: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
label_135ebc:
    if (ctx->pc == 0x135EBCu) {
        ctx->pc = 0x135EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135EB8u;
        // 0x135ebc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135EC0u;
        goto label_135ec0;
    }
    ctx->pc = 0x135EB8u;
    {
        const bool branch_taken_0x135eb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x135EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135EB8u;
        // 0x135ebc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135eb8) {
            ctx->pc = 0x135EE4u;
            goto label_135ee4;
        }
    }
    ctx->pc = 0x135EC0u;
label_135ec0:
    // 0x135ec0: 0xc04d8f8  jal         func_1363E0
label_135ec4:
    if (ctx->pc == 0x135EC4u) {
        ctx->pc = 0x135EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135EC0u;
        // 0x135ec4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135EC8u;
        goto label_135ec8;
    }
    ctx->pc = 0x135EC0u;
    SET_GPR_U32(ctx, 31, 0x135EC8u);
    ctx->pc = 0x135EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135EC0u;
    // 0x135ec4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x135EC0u, 0x135EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135EC8u;
label_135ec8:
    // 0x135ec8: 0x54520007  bnel        $v0, $s2, . + 4 + (0x7 << 2)
label_135ecc:
    if (ctx->pc == 0x135ECCu) {
        ctx->pc = 0x135ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135EC8u;
        // 0x135ecc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135ED0u;
        goto label_135ed0;
    }
    ctx->pc = 0x135EC8u;
    {
        const bool branch_taken_0x135ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x135ec8) {
            ctx->pc = 0x135ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135EC8u;
            // 0x135ecc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x135EE8u;
            goto label_135ee8;
        }
    }
    ctx->pc = 0x135ED0u;
label_135ed0:
    // 0x135ed0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x135ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_135ed4:
    // 0x135ed4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x135ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_135ed8:
    // 0x135ed8: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x135ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_135edc:
    // 0x135edc: 0x40f809  jalr        $v0
label_135ee0:
    if (ctx->pc == 0x135EE0u) {
        ctx->pc = 0x135EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135EDCu;
        // 0x135ee0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135EE4u;
        goto label_135ee4;
    }
    ctx->pc = 0x135EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x135EE4u);
        ctx->pc = 0x135EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135EDCu;
        // 0x135ee0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135EDCu, 0x135EE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x135EE4u;
label_135ee4:
    // 0x135ee4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135ee4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_135ee8:
    // 0x135ee8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135ee8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_135eec:
    // 0x135eec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x135eecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_135ef0:
    // 0x135ef0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x135ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_135ef4:
    // 0x135ef4: 0x3e00008  jr          $ra
label_135ef8:
    if (ctx->pc == 0x135EF8u) {
        ctx->pc = 0x135EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135EF4u;
        // 0x135ef8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135EFCu;
        goto label_135efc;
    }
    ctx->pc = 0x135EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135EF4u;
        // 0x135ef8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135EFCu;
label_135efc:
    // 0x135efc: 0x0  nop
    ctx->pc = 0x135efcu;
    // NOP
    ctx->pc = 0x135f00u;
}
