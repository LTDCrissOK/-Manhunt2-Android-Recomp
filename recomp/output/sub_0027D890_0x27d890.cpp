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

// Function: sub_0027D890
// Address: 0x27d890 - 0x27d988
void sub_0027D890_0x27d890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027D890_0x27d890");
#endif

    switch (ctx->pc) {
        case 0x27d900u: goto label_27d900;
        case 0x27d928u: goto label_27d928;
        case 0x27d944u: goto label_27d944;
        default: break;
    }

    ctx->pc = 0x27d890u;

    // 0x27d890: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27d890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27d894: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x27d894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x27d898: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x27d898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x27d89c: 0x2463b2e0  addiu       $v1, $v1, -0x4D20
    ctx->pc = 0x27d89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947552));
    // 0x27d8a0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x27d8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x27d8a4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x27d8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x27d8a8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x27d8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x27d8ac: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x27d8acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x27d8b0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x27d8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x27d8b4: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x27d8b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x27d8b8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x27d8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27d8bc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x27d8bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d8c0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x27d8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x27d8c4: 0x2442aff0  addiu       $v0, $v0, -0x5010
    ctx->pc = 0x27d8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946800));
    // 0x27d8c8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x27d8c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d8cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27d8ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d8d0: 0x8ce80048  lw          $t0, 0x48($a3)
    ctx->pc = 0x27d8d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 72)));
    // 0x27d8d4: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x27d8d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27d8d8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x27d8d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d8dc: 0xac680004  sw          $t0, 0x4($v1)
    ctx->pc = 0x27d8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 8));
    // 0x27d8e0: 0xe44c0010  swc1        $f12, 0x10($v0)
    ctx->pc = 0x27d8e0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x27d8e4: 0x6982b  sltu        $s3, $zero, $a2
    ctx->pc = 0x27d8e4u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x27d8e8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x27d8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x27d8ec: 0xf0182a  slt         $v1, $a3, $s0
    ctx->pc = 0x27d8ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x27d8f0: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x27d8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x27d8f4: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x27D8F4u;
    {
        const bool branch_taken_0x27d8f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D8F4u;
        // 0x27d8f8: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d8f4) {
            ctx->pc = 0x27D95Cu;
            goto label_27d95c;
        }
    }
    ctx->pc = 0x27D8FCu;
    // 0x27d8fc: 0x2412007e  addiu       $s2, $zero, 0x7E
    ctx->pc = 0x27d8fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_27d900:
    // 0x27d900: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x27d900u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x27d904: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x27d904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x27d908: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x27d908u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27d90c: 0x14720007  bne         $v1, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x27D90Cu;
    {
        const bool branch_taken_0x27d90c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x27D910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D90Cu;
        // 0x27d910: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d90c) {
            ctx->pc = 0x27D92Cu;
            goto label_27d92c;
        }
    }
    ctx->pc = 0x27D914u;
    // 0x27d914: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27d914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d918: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27d918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d91c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27d91cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d920: 0xc09f8b4  jal         func_27E2D0
    ctx->pc = 0x27D920u;
    SET_GPR_U32(ctx, 31, 0x27D928u);
    ctx->pc = 0x27D924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D920u;
    // 0x27d924: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E2D0u, 0x27D920u, 0x27D928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D928u;
label_27d928:
    // 0x27d928: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x27d928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_27d92c:
    // 0x27d92c: 0x90102a  slt         $v0, $a0, $s0
    ctx->pc = 0x27d92cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x27d930: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27D930u;
    {
        const bool branch_taken_0x27d930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D930u;
        // 0x27d934: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d930) {
            ctx->pc = 0x27D944u;
            goto label_27d944;
        }
    }
    ctx->pc = 0x27D938u;
    // 0x27d938: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x27d938u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x27d93c: 0xc09f74e  jal         func_27DD38
    ctx->pc = 0x27D93Cu;
    SET_GPR_U32(ctx, 31, 0x27D944u);
    ctx->pc = 0x27D940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D93Cu;
    // 0x27d940: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DD38u, 0x27D93Cu, 0x27D944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D944u;
label_27d944:
    // 0x27d944: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x27d944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d948: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27d948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27d94c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x27d94cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d950: 0xf0182a  slt         $v1, $a3, $s0
    ctx->pc = 0x27d950u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x27d954: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x27D954u;
    {
        const bool branch_taken_0x27d954 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D954u;
        // 0x27d958: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d954) {
            ctx->pc = 0x27D900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27d900;
        }
    }
    ctx->pc = 0x27D95Cu;
label_27d95c:
    // 0x27d95c: 0x2682aff0  addiu       $v0, $s4, -0x5010
    ctx->pc = 0x27d95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946800));
    // 0x27d960: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x27d960u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27d964: 0xac530004  sw          $s3, 0x4($v0)
    ctx->pc = 0x27d964u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
    // 0x27d968: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x27d968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d96c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x27d96cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27d970: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x27d970u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27d974: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x27d974u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x27d978: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x27d978u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27d97c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x27d97cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x27d980: 0x3e00008  jr          $ra
    ctx->pc = 0x27D980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D980u;
        // 0x27d984: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27D988u;
}
