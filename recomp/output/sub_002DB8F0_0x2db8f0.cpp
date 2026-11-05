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

// Function: sub_002DB8F0
// Address: 0x2db8f0 - 0x2db9e8
void sub_002DB8F0_0x2db8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB8F0_0x2db8f0");
#endif

    switch (ctx->pc) {
        case 0x2db91cu: goto label_2db91c;
        case 0x2db970u: goto label_2db970;
        case 0x2db99cu: goto label_2db99c;
        case 0x2db9c0u: goto label_2db9c0;
        case 0x2db9ccu: goto label_2db9cc;
        default: break;
    }

    ctx->pc = 0x2db8f0u;

    // 0x2db8f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2db8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2db8f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2db8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2db8f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2db8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2db8fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2db8fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db900: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2db900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2db904: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2db904u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db908: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2db908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2db90c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2db90cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db910: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2db910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2db914: 0xc0b6e2e  jal         func_2DB8B8
    ctx->pc = 0x2DB914u;
    SET_GPR_U32(ctx, 31, 0x2DB91Cu);
    ctx->pc = 0x2DB918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB914u;
    // 0x2db918: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB8B8u, 0x2DB914u, 0x2DB91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB91Cu;
label_2db91c:
    // 0x2db91c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2DB91Cu;
    {
        const bool branch_taken_0x2db91c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB91Cu;
        // 0x2db920: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db91c) {
            ctx->pc = 0x2DB9CCu;
            goto label_2db9cc;
        }
    }
    ctx->pc = 0x2DB924u;
    // 0x2db924: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2db924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x2db928: 0x2442dce0  addiu       $v0, $v0, -0x2320
    ctx->pc = 0x2db928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2db92c: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2DB92Cu;
    {
        const bool branch_taken_0x2db92c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DB930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB92Cu;
        // 0x2db930: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db92c) {
            ctx->pc = 0x2DB964u;
            goto label_2db964;
        }
    }
    ctx->pc = 0x2DB934u;
    // 0x2db934: 0x8c42bd50  lw          $v0, -0x42B0($v0)
    ctx->pc = 0x2db934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
    // 0x2db938: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2DB938u;
    {
        const bool branch_taken_0x2db938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB938u;
        // 0x2db93c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db938) {
            ctx->pc = 0x2DB968u;
            goto label_2db968;
        }
    }
    ctx->pc = 0x2DB940u;
    // 0x2db940: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x2db940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2db944: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2db944u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db948: 0x0  nop
    ctx->pc = 0x2db948u;
    // NOP
    // 0x2db94c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2db94cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2db950: 0x0  nop
    ctx->pc = 0x2db950u;
    // NOP
    // 0x2db954: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2DB954u;
    {
        const bool branch_taken_0x2db954 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DB958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB954u;
        // 0x2db958: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db954) {
            ctx->pc = 0x2DB968u;
            goto label_2db968;
        }
    }
    ctx->pc = 0x2DB95Cu;
    // 0x2db95c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2DB95Cu;
    {
        const bool branch_taken_0x2db95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB95Cu;
        // 0x2db960: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db95c) {
            ctx->pc = 0x2DB9D0u;
            goto label_2db9d0;
        }
    }
    ctx->pc = 0x2DB964u;
label_2db964:
    // 0x2db964: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2db964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2db968:
    // 0x2db968: 0xc0b6f10  jal         func_2DBC40
    ctx->pc = 0x2DB968u;
    SET_GPR_U32(ctx, 31, 0x2DB970u);
    ctx->pc = 0x2DB96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB968u;
    // 0x2db96c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBC40u, 0x2DB968u, 0x2DB970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB970u;
label_2db970:
    // 0x2db970: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DB970u;
    {
        const bool branch_taken_0x2db970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db970) {
            ctx->pc = 0x2DB974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB970u;
            // 0x2db974: 0xae000404  sw          $zero, 0x404($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1028), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB988u;
            goto label_2db988;
        }
    }
    ctx->pc = 0x2DB978u;
    // 0x2db978: 0xae000400  sw          $zero, 0x400($s0)
    ctx->pc = 0x2db978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1024), GPR_U32(ctx, 0));
    // 0x2db97c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2db97cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db980: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2DB980u;
    {
        const bool branch_taken_0x2db980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB980u;
        // 0x2db984: 0xae000404  sw          $zero, 0x404($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1028), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db980) {
            ctx->pc = 0x2DB9CCu;
            goto label_2db9cc;
        }
    }
    ctx->pc = 0x2DB988u;
label_2db988:
    // 0x2db988: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2db988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db98c: 0xae100400  sw          $s0, 0x400($s0)
    ctx->pc = 0x2db98cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1024), GPR_U32(ctx, 16));
    // 0x2db990: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2db990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db994: 0xc0aedea  jal         func_2BB7A8
    ctx->pc = 0x2DB994u;
    SET_GPR_U32(ctx, 31, 0x2DB99Cu);
    ctx->pc = 0x2DB998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB994u;
    // 0x2db998: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB7A8u, 0x2DB994u, 0x2DB99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB99Cu;
label_2db99c:
    // 0x2db99c: 0x8e020400  lw          $v0, 0x400($s0)
    ctx->pc = 0x2db99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1024)));
    // 0x2db9a0: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DB9A0u;
    {
        const bool branch_taken_0x2db9a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB9A0u;
        // 0x2db9a4: 0xa44003fe  sh          $zero, 0x3FE($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 1022), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db9a0) {
            ctx->pc = 0x2DB9C0u;
            goto label_2db9c0;
        }
    }
    ctx->pc = 0x2DB9A8u;
    // 0x2db9a8: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x2db9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x2db9ac: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2db9acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2db9b0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2db9b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2db9b4: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x2db9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    // 0x2db9b8: 0xc07f540  jal         func_1FD500
    ctx->pc = 0x2DB9B8u;
    SET_GPR_U32(ctx, 31, 0x2DB9C0u);
    ctx->pc = 0x2DB9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB9B8u;
    // 0x2db9bc: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD500u, 0x2DB9B8u, 0x2DB9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB9C0u;
label_2db9c0:
    // 0x2db9c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2db9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db9c4: 0xc0b6e7a  jal         func_2DB9E8
    ctx->pc = 0x2DB9C4u;
    SET_GPR_U32(ctx, 31, 0x2DB9CCu);
    ctx->pc = 0x2DB9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB9C4u;
    // 0x2db9c8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB9E8u, 0x2DB9C4u, 0x2DB9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB9CCu;
label_2db9cc:
    // 0x2db9cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2db9ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2db9d0:
    // 0x2db9d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2db9d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2db9d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2db9d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2db9d8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2db9d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2db9dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2db9dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2db9e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB9E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB9E0u;
        // 0x2db9e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB9E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB9E8u;
}
