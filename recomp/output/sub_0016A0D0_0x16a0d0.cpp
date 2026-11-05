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

// Function: sub_0016A0D0
// Address: 0x16a0d0 - 0x16a1a8
void sub_0016A0D0_0x16a0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A0D0_0x16a0d0");
#endif

    switch (ctx->pc) {
        case 0x16a12cu: goto label_16a12c;
        case 0x16a140u: goto label_16a140;
        case 0x16a148u: goto label_16a148;
        case 0x16a178u: goto label_16a178;
        default: break;
    }

    ctx->pc = 0x16a0d0u;

    // 0x16a0d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16a0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16a0d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16a0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16a0d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16a0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16a0dc: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x16a0dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a0e0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x16a0e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a0e4: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x16a0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x16a0e8: 0x2711026  xor         $v0, $s3, $s1
    ctx->pc = 0x16a0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ GPR_U64(ctx, 17));
    // 0x16a0ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16a0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16a0f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16a0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16a0f4: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x16a0f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a0f8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x16a0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x16a0fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16a0fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a100: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x16a100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x16a104: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x16a104u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a108: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x16a108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x16a10c: 0x102880b  movn        $s1, $t0, $v0
    ctx->pc = 0x16a10cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 8));
    // 0x16a110: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x16a110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x16a114: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x16a114u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a118: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x16a118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x16a11c: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x16a11cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a120: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x16a120u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a124: 0xc05ab66  jal         func_16AD98
    ctx->pc = 0x16A124u;
    SET_GPR_U32(ctx, 31, 0x16A12Cu);
    ctx->pc = 0x16A128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A124u;
    // 0x16a128: 0x160b82d  daddu       $s7, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AD98u, 0x16A124u, 0x16A12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A12Cu;
label_16a12c:
    // 0x16a12c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x16a12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x16a130: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16A130u;
    {
        const bool branch_taken_0x16a130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x16A134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A130u;
        // 0x16a134: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a130) {
            ctx->pc = 0x16A140u;
            goto label_16a140;
        }
    }
    ctx->pc = 0x16A138u;
    // 0x16a138: 0xc05a824  jal         func_16A090
    ctx->pc = 0x16A138u;
    SET_GPR_U32(ctx, 31, 0x16A140u);
    ctx->pc = 0x16A13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A138u;
    // 0x16a13c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A090u, 0x16A138u, 0x16A140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A140u;
label_16a140:
    // 0x16a140: 0xc05abc8  jal         func_16AF20
    ctx->pc = 0x16A140u;
    SET_GPR_U32(ctx, 31, 0x16A148u);
    ctx->pc = 0x16A144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A140u;
    // 0x16a144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AF20u, 0x16A140u, 0x16A148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A148u;
label_16a148:
    // 0x16a148: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x16a148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x16a14c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x16a14cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16a150: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a154: 0xa4530014  sh          $s3, 0x14($v0)
    ctx->pc = 0x16a154u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 19));
    // 0x16a158: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16a158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a15c: 0xa4510016  sh          $s1, 0x16($v0)
    ctx->pc = 0x16a15cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 22), (uint16_t)GPR_U32(ctx, 17));
    // 0x16a160: 0xac540018  sw          $s4, 0x18($v0)
    ctx->pc = 0x16a160u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 20));
    // 0x16a164: 0xac55001c  sw          $s5, 0x1C($v0)
    ctx->pc = 0x16a164u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 21));
    // 0x16a168: 0xac560028  sw          $s6, 0x28($v0)
    ctx->pc = 0x16a168u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 22));
    // 0x16a16c: 0xac57002c  sw          $s7, 0x2C($v0)
    ctx->pc = 0x16a16cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 23));
    // 0x16a170: 0xc05a926  jal         func_16A498
    ctx->pc = 0x16A170u;
    SET_GPR_U32(ctx, 31, 0x16A178u);
    ctx->pc = 0x16A174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A170u;
    // 0x16a174: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A498u, 0x16A170u, 0x16A178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A178u;
label_16a178:
    // 0x16a178: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16a178u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a17c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16a17cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16a180: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16a180u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a184: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16a184u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16a188: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x16a188u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16a18c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x16a18cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16a190: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x16a190u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16a194: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x16a194u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16a198: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x16a198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16a19c: 0x3e00008  jr          $ra
    ctx->pc = 0x16A19Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A19Cu;
        // 0x16a1a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A19Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A1A4u;
    // 0x16a1a4: 0x0  nop
    ctx->pc = 0x16a1a4u;
    // NOP
    ctx->pc = 0x16a1a8u;
}
