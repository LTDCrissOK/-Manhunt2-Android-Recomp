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

// Function: sub_0027E178
// Address: 0x27e178 - 0x27e2a0
void sub_0027E178_0x27e178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027E178_0x27e178");
#endif

    switch (ctx->pc) {
        case 0x27e1d8u: goto label_27e1d8;
        case 0x27e238u: goto label_27e238;
        case 0x27e254u: goto label_27e254;
        default: break;
    }

    ctx->pc = 0x27e178u;

    // 0x27e178: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x27e178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x27e17c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x27e17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x27e180: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x27e180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x27e184: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27e184u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e188: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x27e188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27e18c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x27e18cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e190: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x27e190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x27e194: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x27e194u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27e198: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x27e198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x27e19c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27e19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e1a0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x27e1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x27e1a4: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x27e1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x27e1a8: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x27e1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x27e1ac: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x27e1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x27e1b0: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x27e1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x27e1b4: 0x1a20002d  blez        $s1, . + 4 + (0x2D << 2)
    ctx->pc = 0x27E1B4u;
    {
        const bool branch_taken_0x27e1b4 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x27E1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E1B4u;
        // 0x27e1b8: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e1b4) {
            ctx->pc = 0x27E26Cu;
            goto label_27e26c;
        }
    }
    ctx->pc = 0x27E1BCu;
    // 0x27e1bc: 0x241e0060  addiu       $fp, $zero, 0x60
    ctx->pc = 0x27e1bcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x27e1c0: 0x3417ff92  ori         $s7, $zero, 0xFF92
    ctx->pc = 0x27e1c0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65426);
    // 0x27e1c4: 0x24160027  addiu       $s6, $zero, 0x27
    ctx->pc = 0x27e1c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x27e1c8: 0x2415005e  addiu       $s5, $zero, 0x5E
    ctx->pc = 0x27e1c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x27e1cc: 0x24140020  addiu       $s4, $zero, 0x20
    ctx->pc = 0x27e1ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x27e1d0: 0x2413007e  addiu       $s3, $zero, 0x7E
    ctx->pc = 0x27e1d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x27e1d4: 0x0  nop
    ctx->pc = 0x27e1d4u;
    // NOP
label_27e1d8:
    // 0x27e1d8: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x27e1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x27e1dc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x27e1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x27e1e0: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x27e1e0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27e1e4: 0x509e0004  beql        $a0, $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x27E1E4u;
    {
        const bool branch_taken_0x27e1e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 30));
        if (branch_taken_0x27e1e4) {
            ctx->pc = 0x27E1E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E1E4u;
            // 0x27e1e8: 0xa4560000  sh          $s6, 0x0($v0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27E1F8u;
            goto label_27e1f8;
        }
    }
    ctx->pc = 0x27E1ECu;
    // 0x27e1ec: 0x54970003  bnel        $a0, $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x27E1ECu;
    {
        const bool branch_taken_0x27e1ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 23));
        if (branch_taken_0x27e1ec) {
            ctx->pc = 0x27E1F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E1ECu;
            // 0x27e1f0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27E1FCu;
            goto label_27e1fc;
        }
    }
    ctx->pc = 0x27E1F4u;
    // 0x27e1f4: 0xa4560000  sh          $s6, 0x0($v0)
    ctx->pc = 0x27e1f4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 22));
label_27e1f8:
    // 0x27e1f8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x27e1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_27e1fc:
    // 0x27e1fc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x27e1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x27e200: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x27e200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x27e204: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x27e204u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27e208: 0x50750001  beql        $v1, $s5, . + 4 + (0x1 << 2)
    ctx->pc = 0x27E208u;
    {
        const bool branch_taken_0x27e208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        if (branch_taken_0x27e208) {
            ctx->pc = 0x27E20Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E208u;
            // 0x27e20c: 0xa4540000  sh          $s4, 0x0($v0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27E210u;
            goto label_27e210;
        }
    }
    ctx->pc = 0x27E210u;
label_27e210:
    // 0x27e210: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x27e210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e214: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x27e214u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x27e218: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x27e218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x27e21c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x27e21cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27e220: 0x14730006  bne         $v1, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x27E220u;
    {
        const bool branch_taken_0x27e220 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x27E224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E220u;
        // 0x27e224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e220) {
            ctx->pc = 0x27E23Cu;
            goto label_27e23c;
        }
    }
    ctx->pc = 0x27E228u;
    // 0x27e228: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27e228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e22c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27e22cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e230: 0xc09f8b4  jal         func_27E2D0
    ctx->pc = 0x27E230u;
    SET_GPR_U32(ctx, 31, 0x27E238u);
    ctx->pc = 0x27E234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E230u;
    // 0x27e234: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E2D0u, 0x27E230u, 0x27E238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E238u;
label_27e238:
    // 0x27e238: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27e238u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27e23c:
    // 0x27e23c: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x27E23Cu;
    {
        const bool branch_taken_0x27e23c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E23Cu;
        // 0x27e240: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e23c) {
            ctx->pc = 0x27E26Cu;
            goto label_27e26c;
        }
    }
    ctx->pc = 0x27E244u;
    // 0x27e244: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x27e244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e248: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x27e248u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x27e24c: 0xc09f74e  jal         func_27DD38
    ctx->pc = 0x27E24Cu;
    SET_GPR_U32(ctx, 31, 0x27E254u);
    ctx->pc = 0x27E250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E24Cu;
    // 0x27e250: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DD38u, 0x27E24Cu, 0x27E254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E254u;
label_27e254:
    // 0x27e254: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x27e254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e258: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27e258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27e25c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27e25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e260: 0x91182a  slt         $v1, $a0, $s1
    ctx->pc = 0x27e260u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x27e264: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x27E264u;
    {
        const bool branch_taken_0x27e264 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E264u;
        // 0x27e268: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e264) {
            ctx->pc = 0x27E1D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27e1d8;
        }
    }
    ctx->pc = 0x27E26Cu;
label_27e26c:
    // 0x27e26c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x27e26cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e270: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x27e270u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27e274: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x27e274u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27e278: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x27e278u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27e27c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x27e27cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x27e280: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x27e280u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27e284: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x27e284u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x27e288: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x27e288u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27e28c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x27e28cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x27e290: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x27e290u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27e294: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x27e294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x27e298: 0x3e00008  jr          $ra
    ctx->pc = 0x27E298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E298u;
        // 0x27e29c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E2A0u;
}
