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

// Function: sub_00178B88
// Address: 0x178b88 - 0x178c48
void sub_00178B88_0x178b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178B88_0x178b88");
#endif

    switch (ctx->pc) {
        case 0x178ba8u: goto label_178ba8;
        case 0x178bb8u: goto label_178bb8;
        case 0x178bc4u: goto label_178bc4;
        case 0x178bd4u: goto label_178bd4;
        case 0x178c00u: goto label_178c00;
        case 0x178c2cu: goto label_178c2c;
        default: break;
    }

    ctx->pc = 0x178b88u;

    // 0x178b88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x178b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x178b8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x178b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x178b90: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x178b90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178b94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x178b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x178b98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x178b9c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x178b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x178ba0: 0xc04f76e  jal         func_13DDB8
    ctx->pc = 0x178BA0u;
    SET_GPR_U32(ctx, 31, 0x178BA8u);
    ctx->pc = 0x178BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178BA0u;
    // 0x178ba4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DDB8u, 0x178BA0u, 0x178BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178BA8u;
label_178ba8:
    // 0x178ba8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x178ba8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178bac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x178bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178bb0: 0xc04f74a  jal         func_13DD28
    ctx->pc = 0x178BB0u;
    SET_GPR_U32(ctx, 31, 0x178BB8u);
    ctx->pc = 0x178BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178BB0u;
    // 0x178bb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD28u, 0x178BB0u, 0x178BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178BB8u;
label_178bb8:
    // 0x178bb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x178bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178bbc: 0xc05ead6  jal         func_17AB58
    ctx->pc = 0x178BBCu;
    SET_GPR_U32(ctx, 31, 0x178BC4u);
    ctx->pc = 0x178BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178BBCu;
    // 0x178bc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AB58u, 0x178BBCu, 0x178BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178BC4u;
label_178bc4:
    // 0x178bc4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x178bc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178bc8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x178bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178bcc: 0xc04f744  jal         func_13DD10
    ctx->pc = 0x178BCCu;
    SET_GPR_U32(ctx, 31, 0x178BD4u);
    ctx->pc = 0x178BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178BCCu;
    // 0x178bd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD10u, 0x178BCCu, 0x178BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178BD4u;
label_178bd4:
    // 0x178bd4: 0x92430009  lbu         $v1, 0x9($s2)
    ctx->pc = 0x178bd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x178bd8: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x178bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x178bdc: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x178bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x178be0: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x178be0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x178be4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x178be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x178be8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x178be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x178bec: 0xa2430009  sb          $v1, 0x9($s2)
    ctx->pc = 0x178becu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x178bf0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x178bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178bf4: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x178bf4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x178bf8: 0xc05eeb0  jal         func_17BAC0
    ctx->pc = 0x178BF8u;
    SET_GPR_U32(ctx, 31, 0x178C00u);
    ctx->pc = 0x178BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178BF8u;
    // 0x178bfc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BAC0u, 0x178BF8u, 0x178C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178C00u;
label_178c00:
    // 0x178c00: 0xc64005a0  lwc1        $f0, 0x5A0($s2)
    ctx->pc = 0x178c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178c04: 0xe600022c  swc1        $f0, 0x22C($s0)
    ctx->pc = 0x178c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 556), bits); }
    // 0x178c08: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x178c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x178c0c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x178C0Cu;
    {
        const bool branch_taken_0x178c0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x178C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178C0Cu;
        // 0x178c10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178c0c) {
            ctx->pc = 0x178C20u;
            goto label_178c20;
        }
    }
    ctx->pc = 0x178C14u;
    // 0x178c14: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x178c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x178c18: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x178C18u;
    {
        const bool branch_taken_0x178c18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x178c18) {
            ctx->pc = 0x178C24u;
            goto label_178c24;
        }
    }
    ctx->pc = 0x178C20u;
label_178c20:
    // 0x178c20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x178c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_178c24:
    // 0x178c24: 0xc05ef1c  jal         func_17BC70
    ctx->pc = 0x178C24u;
    SET_GPR_U32(ctx, 31, 0x178C2Cu);
    ctx->pc = 0x178C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178C24u;
    // 0x178c28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BC70u, 0x178C24u, 0x178C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178C2Cu;
label_178c2c:
    // 0x178c2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178c2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178c30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x178c30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178c34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x178c34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178c38: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x178c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x178C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178C3Cu;
        // 0x178c40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178C44u;
    // 0x178c44: 0x0  nop
    ctx->pc = 0x178c44u;
    // NOP
    ctx->pc = 0x178c48u;
}
