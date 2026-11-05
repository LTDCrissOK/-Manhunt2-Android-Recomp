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

// Function: sub_0015A0D0
// Address: 0x15a0d0 - 0x15a1a8
void sub_0015A0D0_0x15a0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A0D0_0x15a0d0");
#endif

    switch (ctx->pc) {
        case 0x15a0f4u: goto label_15a0f4;
        default: break;
    }

    ctx->pc = 0x15a0d0u;

    // 0x15a0d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15a0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15a0d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15a0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15a0d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x15a0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x15a0dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15a0dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a0e0: 0x8e020210  lw          $v0, 0x210($s0)
    ctx->pc = 0x15a0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x15a0e4: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x15A0E4u;
    {
        const bool branch_taken_0x15a0e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15a0e4) {
            ctx->pc = 0x15A0E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A0E4u;
            // 0x15a0e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A13Cu;
            goto label_15a13c;
        }
    }
    ctx->pc = 0x15A0ECu;
    // 0x15a0ec: 0xc04f03a  jal         func_13C0E8
    ctx->pc = 0x15A0ECu;
    SET_GPR_U32(ctx, 31, 0x15A0F4u);
    ctx->pc = 0x13C0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C0E8u, 0x15A0ECu, 0x15A0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A0F4u;
label_15a0f4:
    // 0x15a0f4: 0xae0002e0  sw          $zero, 0x2E0($s0)
    ctx->pc = 0x15a0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 0));
    // 0x15a0f8: 0xae0002e4  sw          $zero, 0x2E4($s0)
    ctx->pc = 0x15a0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 740), GPR_U32(ctx, 0));
    // 0x15a0fc: 0xae0002e8  sw          $zero, 0x2E8($s0)
    ctx->pc = 0x15a0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 744), GPR_U32(ctx, 0));
    // 0x15a100: 0xae0002f0  sw          $zero, 0x2F0($s0)
    ctx->pc = 0x15a100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 752), GPR_U32(ctx, 0));
    // 0x15a104: 0xae0002f4  sw          $zero, 0x2F4($s0)
    ctx->pc = 0x15a104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 756), GPR_U32(ctx, 0));
    // 0x15a108: 0xae0002ec  sw          $zero, 0x2EC($s0)
    ctx->pc = 0x15a108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 748), GPR_U32(ctx, 0));
    // 0x15a10c: 0xae0002f8  sw          $zero, 0x2F8($s0)
    ctx->pc = 0x15a10cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 760), GPR_U32(ctx, 0));
    // 0x15a110: 0x7e000300  sq          $zero, 0x300($s0)
    ctx->pc = 0x15a110u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 768), GPR_VEC(ctx, 0));
    // 0x15a114: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x15a114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x15a118: 0xae000b70  sw          $zero, 0xB70($s0)
    ctx->pc = 0x15a118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2928), GPR_U32(ctx, 0));
    // 0x15a11c: 0xae020b6c  sw          $v0, 0xB6C($s0)
    ctx->pc = 0x15a11cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2924), GPR_U32(ctx, 2));
    // 0x15a120: 0xae000310  sw          $zero, 0x310($s0)
    ctx->pc = 0x15a120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 784), GPR_U32(ctx, 0));
    // 0x15a124: 0xae000314  sw          $zero, 0x314($s0)
    ctx->pc = 0x15a124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 788), GPR_U32(ctx, 0));
    // 0x15a128: 0xae000318  sw          $zero, 0x318($s0)
    ctx->pc = 0x15a128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 792), GPR_U32(ctx, 0));
    // 0x15a12c: 0xae00031c  sw          $zero, 0x31C($s0)
    ctx->pc = 0x15a12cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 796), GPR_U32(ctx, 0));
    // 0x15a130: 0xae000b64  sw          $zero, 0xB64($s0)
    ctx->pc = 0x15a130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2916), GPR_U32(ctx, 0));
    // 0x15a134: 0xae000b68  sw          $zero, 0xB68($s0)
    ctx->pc = 0x15a134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2920), GPR_U32(ctx, 0));
    // 0x15a138: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15a138u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15a13c:
    // 0x15a13c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x15a13cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15a140: 0x3e00008  jr          $ra
    ctx->pc = 0x15A140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A140u;
        // 0x15a144: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A148u;
    // 0x15a148: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x15a148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x15a14c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x15a14cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15a150: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x15a150u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x15a154: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x15a154u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x15a158: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x15a158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x15a15c: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x15a15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x15a160: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x15a160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15a164: 0x3c06bfff  lui         $a2, 0xBFFF
    ctx->pc = 0x15a164u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49151 << 16));
    // 0x15a168: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x15a168u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x15a16c: 0x632b8  dsll        $a2, $a2, 10
    ctx->pc = 0x15a16cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 10);
    // 0x15a170: 0x34c603ff  ori         $a2, $a2, 0x3FF
    ctx->pc = 0x15a170u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1023);
    // 0x15a174: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x15a174u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15a178: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15a178u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15a17c: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x15a17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x15a180: 0x8c650108  lw          $a1, 0x108($v1)
    ctx->pc = 0x15a180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x15a184: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x15a184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a188: 0xdca21020  ld          $v0, 0x1020($a1)
    ctx->pc = 0x15a188u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 4128)));
    // 0x15a18c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x15a18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x15a190: 0xfca21020  sd          $v0, 0x1020($a1)
    ctx->pc = 0x15a190u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 4128), GPR_U64(ctx, 2));
    // 0x15a194: 0x8c83020c  lw          $v1, 0x20C($a0)
    ctx->pc = 0x15a194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x15a198: 0xac670100  sw          $a3, 0x100($v1)
    ctx->pc = 0x15a198u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 7));
    // 0x15a19c: 0x3e00008  jr          $ra
    ctx->pc = 0x15A19Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A19Cu;
        // 0x15a1a0: 0xac600104  sw          $zero, 0x104($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A19Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A1A4u;
    // 0x15a1a4: 0x0  nop
    ctx->pc = 0x15a1a4u;
    // NOP
    ctx->pc = 0x15a1a8u;
}
