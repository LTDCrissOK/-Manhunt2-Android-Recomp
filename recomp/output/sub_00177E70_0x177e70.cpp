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

// Function: sub_00177E70
// Address: 0x177e70 - 0x177ef0
void sub_00177E70_0x177e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177E70_0x177e70");
#endif

    switch (ctx->pc) {
        case 0x177e98u: goto label_177e98;
        case 0x177ea0u: goto label_177ea0;
        case 0x177eccu: goto label_177ecc;
        default: break;
    }

    ctx->pc = 0x177e70u;

    // 0x177e70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x177e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x177e74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x177e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x177e78: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x177e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x177e7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x177e7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177e80: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x177e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x177e84: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x177e84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177e88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x177e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177e8c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x177e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x177e90: 0xc05e17a  jal         func_1785E8
    ctx->pc = 0x177E90u;
    SET_GPR_U32(ctx, 31, 0x177E98u);
    ctx->pc = 0x177E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177E90u;
    // 0x177e94: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1785E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1785E8u, 0x177E90u, 0x177E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177E98u;
label_177e98:
    // 0x177e98: 0xc05e1a4  jal         func_178690
    ctx->pc = 0x177E98u;
    SET_GPR_U32(ctx, 31, 0x177EA0u);
    ctx->pc = 0x177E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177E98u;
    // 0x177e9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178690u, 0x177E98u, 0x177EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177EA0u;
label_177ea0:
    // 0x177ea0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x177ea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177ea4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x177ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x177ea8: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x177EA8u;
    {
        const bool branch_taken_0x177ea8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x177EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177EA8u;
        // 0x177eac: 0x108100  sll         $s0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177ea8) {
            ctx->pc = 0x177ED4u;
            goto label_177ed4;
        }
    }
    ctx->pc = 0x177EB0u;
    // 0x177eb0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x177eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177eb4: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x177eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x177eb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x177eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177ebc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x177ebcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177ec0: 0xac53015c  sw          $s3, 0x15C($v0)
    ctx->pc = 0x177ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 348), GPR_U32(ctx, 19));
    // 0x177ec4: 0xc05e1fe  jal         func_1787F8
    ctx->pc = 0x177EC4u;
    SET_GPR_U32(ctx, 31, 0x177ECCu);
    ctx->pc = 0x177EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177EC4u;
    // 0x177ec8: 0xac720160  sw          $s2, 0x160($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 352), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1787F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1787F8u, 0x177EC4u, 0x177ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177ECCu;
label_177ecc:
    // 0x177ecc: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x177eccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x177ed0: 0xa2020164  sb          $v0, 0x164($s0)
    ctx->pc = 0x177ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 356), (uint8_t)GPR_U32(ctx, 2));
label_177ed4:
    // 0x177ed4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x177ed4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177ed8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x177ed8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x177edc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x177edcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177ee0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x177ee0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177ee4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x177ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x177EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177EE8u;
        // 0x177eec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177EF0u;
}
