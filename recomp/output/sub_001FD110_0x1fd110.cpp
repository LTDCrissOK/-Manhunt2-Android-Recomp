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

// Function: sub_001FD110
// Address: 0x1fd110 - 0x1fd208
void sub_001FD110_0x1fd110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD110_0x1fd110");
#endif

    switch (ctx->pc) {
        case 0x1fd144u: goto label_1fd144;
        case 0x1fd158u: goto label_1fd158;
        case 0x1fd174u: goto label_1fd174;
        case 0x1fd1bcu: goto label_1fd1bc;
        case 0x1fd1c8u: goto label_1fd1c8;
        case 0x1fd1e8u: goto label_1fd1e8;
        default: break;
    }

    ctx->pc = 0x1fd110u;

    // 0x1fd110: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fd110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1fd114: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1fd114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1fd118: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1fd118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1fd11c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fd11cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd120: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1fd120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1fd124: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x1fd124u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1fd128: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1FD128u;
    {
        const bool branch_taken_0x1fd128 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD128u;
        // 0x1fd12c: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd128) {
            ctx->pc = 0x1FD1E8u;
            goto label_1fd1e8;
        }
    }
    ctx->pc = 0x1FD130u;
    // 0x1fd130: 0x2e42000a  sltiu       $v0, $s2, 0xA
    ctx->pc = 0x1fd130u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1fd134: 0x5040002d  beql        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x1FD134u;
    {
        const bool branch_taken_0x1fd134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd134) {
            ctx->pc = 0x1FD138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD134u;
            // 0x1fd138: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD1ECu;
            goto label_1fd1ec;
        }
    }
    ctx->pc = 0x1FD13Cu;
    // 0x1fd13c: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x1FD13Cu;
    SET_GPR_U32(ctx, 31, 0x1FD144u);
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x1FD13Cu, 0x1FD144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD144u;
label_1fd144:
    // 0x1fd144: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fd144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd148: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1FD148u;
    {
        const bool branch_taken_0x1fd148 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD148u;
        // 0x1fd14c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd148) {
            ctx->pc = 0x1FD1E8u;
            goto label_1fd1e8;
        }
    }
    ctx->pc = 0x1FD150u;
    // 0x1fd150: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x1FD150u;
    SET_GPR_U32(ctx, 31, 0x1FD158u);
    ctx->pc = 0x1FD154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD150u;
    // 0x1fd154: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x1FD150u, 0x1FD158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD158u;
label_1fd158:
    // 0x1fd158: 0x26430031  addiu       $v1, $s2, 0x31
    ctx->pc = 0x1fd158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 49));
    // 0x1fd15c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1fd15cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1fd160: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1fd160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1fd164: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fd164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd168: 0x38603  sra         $s0, $v1, 24
    ctx->pc = 0x1fd168u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 24));
    // 0x1fd16c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x1FD16Cu;
    SET_GPR_U32(ctx, 31, 0x1FD174u);
    ctx->pc = 0x1FD170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD16Cu;
    // 0x1fd170: 0x24a5fff8  addiu       $a1, $a1, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x1FD16Cu, 0x1FD174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD174u;
label_1fd174:
    // 0x1fd174: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FD174u;
    {
        const bool branch_taken_0x1fd174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD174u;
        // 0x1fd178: 0x3b11021  addu        $v0, $sp, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd174) {
            ctx->pc = 0x1FD19Cu;
            goto label_1fd19c;
        }
    }
    ctx->pc = 0x1FD17Cu;
    // 0x1fd17c: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x1fd17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1fd180: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FD180u;
    {
        const bool branch_taken_0x1fd180 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FD184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD180u;
        // 0x1fd184: 0x24030034  addiu       $v1, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd180) {
            ctx->pc = 0x1FD190u;
            goto label_1fd190;
        }
    }
    ctx->pc = 0x1FD188u;
    // 0x1fd188: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FD188u;
    {
        const bool branch_taken_0x1fd188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD188u;
        // 0x1fd18c: 0x24100033  addiu       $s0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd188) {
            ctx->pc = 0x1FD198u;
            goto label_1fd198;
        }
    }
    ctx->pc = 0x1FD190u;
label_1fd190:
    // 0x1fd190: 0x3a020033  xori        $v0, $s0, 0x33
    ctx->pc = 0x1fd190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)51);
    // 0x1fd194: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x1fd194u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_1fd198:
    // 0x1fd198: 0x3b11021  addu        $v0, $sp, $s1
    ctx->pc = 0x1fd198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 17)));
label_1fd19c:
    // 0x1fd19c: 0x23d1821  addu        $v1, $s1, $sp
    ctx->pc = 0x1fd19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x1fd1a0: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x1fd1a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x1fd1a4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1fd1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1fd1a8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1fd1a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd1ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fd1acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd1b0: 0x24844ed8  addiu       $a0, $a0, 0x4ED8
    ctx->pc = 0x1fd1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20184));
    // 0x1fd1b4: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x1FD1B4u;
    SET_GPR_U32(ctx, 31, 0x1FD1BCu);
    ctx->pc = 0x1FD1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD1B4u;
    // 0x1fd1b8: 0xa0600001  sb          $zero, 0x1($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x1FD1B4u, 0x1FD1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD1BCu;
label_1fd1bc:
    // 0x1fd1bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fd1bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd1c0: 0xc07f438  jal         func_1FD0E0
    ctx->pc = 0x1FD1C0u;
    SET_GPR_U32(ctx, 31, 0x1FD1C8u);
    ctx->pc = 0x1FD1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD1C0u;
    // 0x1fd1c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD0E0u, 0x1FD1C0u, 0x1FD1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD1C8u;
label_1fd1c8:
    // 0x1fd1c8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1fd1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1fd1cc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1fd1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1fd1d0: 0x248478e0  addiu       $a0, $a0, 0x78E0
    ctx->pc = 0x1fd1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30944));
    // 0x1fd1d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fd1d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd1d8: 0xac449330  sw          $a0, -0x6CD0($v0)
    ctx->pc = 0x1fd1d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3F9330u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F9330u, _value); } while (0);
    // 0x1fd1dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fd1dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd1e0: 0xc0b6e3c  jal         func_2DB8F0
    ctx->pc = 0x1FD1E0u;
    SET_GPR_U32(ctx, 31, 0x1FD1E8u);
    ctx->pc = 0x1FD1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD1E0u;
    // 0x1fd1e4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB8F0u, 0x1FD1E0u, 0x1FD1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD1E8u;
label_1fd1e8:
    // 0x1fd1e8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1fd1e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1fd1ec:
    // 0x1fd1ec: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1fd1ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fd1f0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1fd1f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fd1f4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1fd1f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1fd1f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD1F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD1F8u;
        // 0x1fd1fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD1F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD200u;
    // 0x1fd200: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1fd200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1fd204: 0x0  nop
    ctx->pc = 0x1fd204u;
    // NOP
    ctx->pc = 0x1fd208u;
}
