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

// Function: sub_0036E870
// Address: 0x36e870 - 0x36e9b0
void sub_0036E870_0x36e870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E870_0x36e870");
#endif

    switch (ctx->pc) {
        case 0x36e9a4u: goto label_36e9a4;
        default: break;
    }

    ctx->pc = 0x36e870u;

    // 0x36e870: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36e870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36e874: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x36e874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e878: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36e878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36e87c: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x36e87cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x36e880: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x36E880u;
    {
        const bool branch_taken_0x36e880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E880u;
        // 0x36e884: 0x3c08005c  lui         $t0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e880) {
            ctx->pc = 0x36E960u;
            goto label_36e960;
        }
    }
    ctx->pc = 0x36E888u;
    // 0x36e888: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x36e888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x36e88c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x36e88cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x36e890: 0x24427e00  addiu       $v0, $v0, 0x7E00
    ctx->pc = 0x36e890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32256));
    // 0x36e894: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x36e894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x36e898: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x36e898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36e89c: 0x800008  jr          $a0
    ctx->pc = 0x36E89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x36E8A4u: goto label_36e8a4;
            case 0x36E8C0u: goto label_36e8c0;
            case 0x36E8D4u: goto label_36e8d4;
            case 0x36E8E8u: goto label_36e8e8;
            case 0x36E904u: goto label_36e904;
            case 0x36E918u: goto label_36e918;
            case 0x36E92Cu: goto label_36e92c;
            case 0x36E940u: goto label_36e940;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E89Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x36E8A4u;
label_36e8a4:
    // 0x36e8a4: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x36e8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x36e8a8: 0x2404fff1  addiu       $a0, $zero, -0xF
    ctx->pc = 0x36e8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x36e8ac: 0xdc43f160  ld          $v1, -0xEA0($v0)
    ctx->pc = 0x36e8acu;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x5BF160u));
    // 0x36e8b0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x36e8b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e8b4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x36e8b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x36e8b8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x36E8B8u;
    {
        const bool branch_taken_0x36e8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E8B8u;
        // 0x36e8bc: 0xfc43f160  sd          $v1, -0xEA0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 4294963552), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e8b8) {
            ctx->pc = 0x36E960u;
            goto label_36e960;
        }
    }
    ctx->pc = 0x36E8C0u;
label_36e8c0:
    // 0x36e8c0: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x36e8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x36e8c4: 0x2405fff1  addiu       $a1, $zero, -0xF
    ctx->pc = 0x36e8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x36e8c8: 0xdc62f160  ld          $v0, -0xEA0($v1)
    ctx->pc = 0x36e8c8u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x5BF160u));
    // 0x36e8cc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x36E8CCu;
    {
        const bool branch_taken_0x36e8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E8CCu;
        // 0x36e8d0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e8cc) {
            ctx->pc = 0x36E950u;
            goto label_36e950;
        }
    }
    ctx->pc = 0x36E8D4u;
label_36e8d4:
    // 0x36e8d4: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x36e8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x36e8d8: 0x2405fff1  addiu       $a1, $zero, -0xF
    ctx->pc = 0x36e8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x36e8dc: 0xdc62f160  ld          $v0, -0xEA0($v1)
    ctx->pc = 0x36e8dcu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x5BF160u));
    // 0x36e8e0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x36E8E0u;
    {
        const bool branch_taken_0x36e8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E8E0u;
        // 0x36e8e4: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e8e0) {
            ctx->pc = 0x36E950u;
            goto label_36e950;
        }
    }
    ctx->pc = 0x36E8E8u;
label_36e8e8:
    // 0x36e8e8: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x36e8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x36e8ec: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x36e8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x36e8f0: 0xdc43f160  ld          $v1, -0xEA0($v0)
    ctx->pc = 0x36e8f0u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x5BF160u));
    // 0x36e8f4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x36e8f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e8f8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x36e8f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x36e8fc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x36E8FCu;
    {
        const bool branch_taken_0x36e8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E8FCu;
        // 0x36e900: 0xfc43f160  sd          $v1, -0xEA0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 4294963552), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e8fc) {
            ctx->pc = 0x36E960u;
            goto label_36e960;
        }
    }
    ctx->pc = 0x36E904u;
label_36e904:
    // 0x36e904: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x36e904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x36e908: 0x2405fff1  addiu       $a1, $zero, -0xF
    ctx->pc = 0x36e908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x36e90c: 0xdc62f160  ld          $v0, -0xEA0($v1)
    ctx->pc = 0x36e90cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x5BF160u));
    // 0x36e910: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x36E910u;
    {
        const bool branch_taken_0x36e910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E910u;
        // 0x36e914: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e910) {
            ctx->pc = 0x36E950u;
            goto label_36e950;
        }
    }
    ctx->pc = 0x36E918u;
label_36e918:
    // 0x36e918: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x36e918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x36e91c: 0x2405fff1  addiu       $a1, $zero, -0xF
    ctx->pc = 0x36e91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x36e920: 0xdc62f160  ld          $v0, -0xEA0($v1)
    ctx->pc = 0x36e920u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x5BF160u));
    // 0x36e924: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x36E924u;
    {
        const bool branch_taken_0x36e924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E924u;
        // 0x36e928: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e924) {
            ctx->pc = 0x36E950u;
            goto label_36e950;
        }
    }
    ctx->pc = 0x36E92Cu;
label_36e92c:
    // 0x36e92c: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x36e92cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x36e930: 0x2405fff1  addiu       $a1, $zero, -0xF
    ctx->pc = 0x36e930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x36e934: 0xdc62f160  ld          $v0, -0xEA0($v1)
    ctx->pc = 0x36e934u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x5BF160u));
    // 0x36e938: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x36E938u;
    {
        const bool branch_taken_0x36e938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E938u;
        // 0x36e93c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e938) {
            ctx->pc = 0x36E950u;
            goto label_36e950;
        }
    }
    ctx->pc = 0x36E940u;
label_36e940:
    // 0x36e940: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x36e940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x36e944: 0x2405fff1  addiu       $a1, $zero, -0xF
    ctx->pc = 0x36e944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x36e948: 0xdc62f160  ld          $v0, -0xEA0($v1)
    ctx->pc = 0x36e948u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x5BF160u));
    // 0x36e94c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x36e94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_36e950:
    // 0x36e950: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x36e950u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e954: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x36e954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x36e958: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x36e958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x36e95c: 0xfc62f160  sd          $v0, -0xEA0($v1)
    ctx->pc = 0x36e95cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294963552), GPR_U64(ctx, 2));
label_36e960:
    // 0x36e960: 0xdd05f160  ld          $a1, -0xEA0($t0)
    ctx->pc = 0x36e960u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 8), 4294963552)));
    // 0x36e964: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x36e964u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x36e968: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x36e968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e96c: 0x2402f00f  addiu       $v0, $zero, -0xFF1
    ctx->pc = 0x36e96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963215));
    // 0x36e970: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x36e970u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x36e974: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x36e974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x36e978: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x36e978u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x36e97c: 0x31938  dsll        $v1, $v1, 4
    ctx->pc = 0x36e97cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 4);
    // 0x36e980: 0x7300a  movz        $a2, $zero, $a3
    ctx->pc = 0x36e980u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    // 0x36e984: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x36e984u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x36e988: 0x2402cfff  addiu       $v0, $zero, -0x3001
    ctx->pc = 0x36e988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294955007));
    // 0x36e98c: 0x63338  dsll        $a2, $a2, 12
    ctx->pc = 0x36e98cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 12);
    // 0x36e990: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x36e990u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x36e994: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x36e994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x36e998: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x36e998u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x36e99c: 0xc0db9c2  jal         func_36E708
    ctx->pc = 0x36E99Cu;
    SET_GPR_U32(ctx, 31, 0x36E9A4u);
    ctx->pc = 0x36E9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E99Cu;
    // 0x36e9a0: 0xfd05f160  sd          $a1, -0xEA0($t0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 8), 4294963552), GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36E708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36E708u, 0x36E99Cu, 0x36E9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E9A4u;
label_36e9a4:
    // 0x36e9a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36e9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36e9a8: 0x3e00008  jr          $ra
    ctx->pc = 0x36E9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E9A8u;
        // 0x36e9ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E9B0u;
}
