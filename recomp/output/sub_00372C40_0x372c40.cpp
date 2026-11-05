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

// Function: sub_00372C40
// Address: 0x372c40 - 0x373060
void sub_00372C40_0x372c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372C40_0x372c40");
#endif

    switch (ctx->pc) {
        case 0x372da0u: goto label_372da0;
        case 0x372da8u: goto label_372da8;
        case 0x372dccu: goto label_372dcc;
        case 0x372dd4u: goto label_372dd4;
        case 0x372ddcu: goto label_372ddc;
        case 0x372de8u: goto label_372de8;
        case 0x372fb0u: goto label_372fb0;
        case 0x372fe0u: goto label_372fe0;
        case 0x373010u: goto label_373010;
        case 0x373038u: goto label_373038;
        case 0x373040u: goto label_373040;
        default: break;
    }

    ctx->pc = 0x372c40u;

    // 0x372c40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x372c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x372c44: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x372c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x372c48: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x372c48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x372c4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x372c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x372c50: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x372c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x372c54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x372c54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372c58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x372c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x372c5c: 0x3c041200  lui         $a0, 0x1200
    ctx->pc = 0x372c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4608 << 16));
    // 0x372c60: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x372c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x372c64: 0x34841000  ori         $a0, $a0, 0x1000
    ctx->pc = 0x372c64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4096);
    // 0x372c68: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x372c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x372c6c: 0x3c070065  lui         $a3, 0x65
    ctx->pc = 0x372c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)101 << 16));
    // 0x372c70: 0x8c45ccc0  lw          $a1, -0x3340($v0)
    ctx->pc = 0x372c70u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FCCC0u));
    // 0x372c74: 0x8cc3ccc4  lw          $v1, -0x333C($a2)
    ctx->pc = 0x372c74u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FCCC4u));
    // 0x372c78: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x372c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x372c7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x372c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x372c80: 0x8cb30074  lw          $s3, 0x74($a1)
    ctx->pc = 0x372c80u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x372c84: 0xacc3ccc4  sw          $v1, -0x333C($a2)
    ctx->pc = 0x372c84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3FCCC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FCCC4u, _value); } while (0);
    // 0x372c88: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x372c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x372c8c: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x372c8cu;
    SET_GPR_U64(ctx, 3, runtime->Load64(rdram, ctx, 0x12001000u));
    // 0x372c90: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x372c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x372c94: 0xaca20044  sw          $v0, 0x44($a1)
    ctx->pc = 0x372c94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 2));
    // 0x372c98: 0x31b7a  dsrl        $v1, $v1, 13
    ctx->pc = 0x372c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 13);
    // 0x372c9c: 0x8ce25ac0  lw          $v0, 0x5AC0($a3)
    ctx->pc = 0x372c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 23232)));
    // 0x372ca0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x372CA0u;
    {
        const bool branch_taken_0x372ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x372CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372CA0u;
        // 0x372ca4: 0x30740001  andi        $s4, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x372ca0) {
            ctx->pc = 0x372CBCu;
            goto label_372cbc;
        }
    }
    ctx->pc = 0x372CA8u;
    // 0x372ca8: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x372ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x372cac: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x372cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x372cb0: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x372cb0u;
    runtime->Store64(rdram, ctx, 0x12000000u, GPR_U64(ctx, 2));
    // 0x372cb4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x372CB4u;
    {
        const bool branch_taken_0x372cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372CB4u;
        // 0x372cb8: 0xace05ac0  sw          $zero, 0x5AC0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 23232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372cb4) {
            ctx->pc = 0x372D34u;
            goto label_372d34;
        }
    }
    ctx->pc = 0x372CBCu;
label_372cbc:
    // 0x372cbc: 0x8e24ccc0  lw          $a0, -0x3340($s1)
    ctx->pc = 0x372cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954176)));
    // 0x372cc0: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x372cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x372cc4: 0x3c061200  lui         $a2, 0x1200
    ctx->pc = 0x372cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4608 << 16));
    // 0x372cc8: 0x3c071200  lui         $a3, 0x1200
    ctx->pc = 0x372cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4608 << 16));
    // 0x372ccc: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x372cccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x372cd0: 0x34c60020  ori         $a2, $a2, 0x20
    ctx->pc = 0x372cd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32);
    // 0x372cd4: 0x34e70080  ori         $a3, $a3, 0x80
    ctx->pc = 0x372cd4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)128);
    // 0x372cd8: 0x3c051200  lui         $a1, 0x1200
    ctx->pc = 0x372cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4608 << 16));
    // 0x372cdc: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x372cdcu;
    runtime->Store64(rdram, ctx, 0x12000000u, GPR_U64(ctx, 2));
    // 0x372ce0: 0x34a500a0  ori         $a1, $a1, 0xA0
    ctx->pc = 0x372ce0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)160);
    // 0x372ce4: 0x3c081200  lui         $t0, 0x1200
    ctx->pc = 0x372ce4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4608 << 16));
    // 0x372ce8: 0x3c091200  lui         $t1, 0x1200
    ctx->pc = 0x372ce8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4608 << 16));
    // 0x372cec: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x372cecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x372cf0: 0x35080070  ori         $t0, $t0, 0x70
    ctx->pc = 0x372cf0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)112);
    // 0x372cf4: 0x35290090  ori         $t1, $t1, 0x90
    ctx->pc = 0x372cf4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)144);
    // 0x372cf8: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x372cf8u;
    runtime->Store64(rdram, ctx, 0x12000020u, GPR_U64(ctx, 3));
    // 0x372cfc: 0xdc820010  ld          $v0, 0x10($a0)
    ctx->pc = 0x372cfcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x372d00: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x372d00u;
    runtime->Store64(rdram, ctx, 0x12000080u, GPR_U64(ctx, 2));
    // 0x372d04: 0xdc830018  ld          $v1, 0x18($a0)
    ctx->pc = 0x372d04u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x372d08: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x372d08u;
    runtime->Store64(rdram, ctx, 0x120000A0u, GPR_U64(ctx, 3));
    // 0x372d0c: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x372d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x372d10: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x372d10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x372d14: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x372d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x372d18: 0xdc430020  ld          $v1, 0x20($v0)
    ctx->pc = 0x372d18u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x372d1c: 0xfd030000  sd          $v1, 0x0($t0)
    ctx->pc = 0x372d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 3));
    // 0x372d20: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x372d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x372d24: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x372d24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x372d28: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x372d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x372d2c: 0xdc430030  ld          $v1, 0x30($v0)
    ctx->pc = 0x372d2cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x372d30: 0xfd230000  sd          $v1, 0x0($t1)
    ctx->pc = 0x372d30u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
label_372d34:
    // 0x372d34: 0x8e24ccc0  lw          $a0, -0x3340($s1)
    ctx->pc = 0x372d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954176)));
    // 0x372d38: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x372d38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x372d3c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x372d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x372d40: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x372d40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x372d44: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x372d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x372d48: 0x2470cc48  addiu       $s0, $v1, -0x33B8
    ctx->pc = 0x372d48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954056));
    // 0x372d4c: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x372d4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372d50: 0xdca42d38  ld          $a0, 0x2D38($a1)
    ctx->pc = 0x372d50u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x482D38u));
    // 0x372d54: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x372d54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x372d58: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x372d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x372d5c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x372d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x372d60: 0xfc640080  sd          $a0, 0x80($v1)
    ctx->pc = 0x372d60u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 128), GPR_U64(ctx, 4));
    // 0x372d64: 0x8e23ccc0  lw          $v1, -0x3340($s1)
    ctx->pc = 0x372d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954176)));
    // 0x372d68: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x372d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x372d6c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x372D6Cu;
    {
        const bool branch_taken_0x372d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x372D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372D6Cu;
        // 0x372d70: 0x8e29ccc0  lw          $t1, -0x3340($s1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372d6c) {
            ctx->pc = 0x372DFCu;
            goto label_372dfc;
        }
    }
    ctx->pc = 0x372D74u;
    // 0x372d74: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x372d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x372d78: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x372D78u;
    {
        const bool branch_taken_0x372d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x372d78) {
            ctx->pc = 0x372D7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x372D78u;
            // 0x372d7c: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x372DB0u;
            goto label_372db0;
        }
    }
    ctx->pc = 0x372D80u;
    // 0x372d80: 0x8e44cc48  lw          $a0, -0x33B8($s2)
    ctx->pc = 0x372d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954056)));
    // 0x372d84: 0x846a005e  lh          $t2, 0x5E($v1)
    ctx->pc = 0x372d84u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 94)));
    // 0x372d88: 0x84650042  lh          $a1, 0x42($v1)
    ctx->pc = 0x372d88u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 66)));
    // 0x372d8c: 0x84660058  lh          $a2, 0x58($v1)
    ctx->pc = 0x372d8cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x372d90: 0x8467005a  lh          $a3, 0x5A($v1)
    ctx->pc = 0x372d90u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 90)));
    // 0x372d94: 0x8468005c  lh          $t0, 0x5C($v1)
    ctx->pc = 0x372d94u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x372d98: 0xc0dc724  jal         func_371C90
    ctx->pc = 0x372D98u;
    SET_GPR_U32(ctx, 31, 0x372DA0u);
    ctx->pc = 0x372D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372D98u;
    // 0x372d9c: 0x8469004c  lh          $t1, 0x4C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371C90u, 0x372D98u, 0x372DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372DA0u;
label_372da0:
    // 0x372da0: 0xc0dc70e  jal         func_371C38
    ctx->pc = 0x372DA0u;
    SET_GPR_U32(ctx, 31, 0x372DA8u);
    ctx->pc = 0x372DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372DA0u;
    // 0x372da4: 0x8e44cc48  lw          $a0, -0x33B8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954056)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371C38u, 0x372DA0u, 0x372DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372DA8u;
label_372da8:
    // 0x372da8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x372DA8u;
    {
        const bool branch_taken_0x372da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x372da8) {
            ctx->pc = 0x372DD4u;
            goto label_372dd4;
        }
    }
    ctx->pc = 0x372DB0u;
label_372db0:
    // 0x372db0: 0x846a005e  lh          $t2, 0x5E($v1)
    ctx->pc = 0x372db0u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 94)));
    // 0x372db4: 0x84650040  lh          $a1, 0x40($v1)
    ctx->pc = 0x372db4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x372db8: 0x84660058  lh          $a2, 0x58($v1)
    ctx->pc = 0x372db8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x372dbc: 0x8467005a  lh          $a3, 0x5A($v1)
    ctx->pc = 0x372dbcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 90)));
    // 0x372dc0: 0x8468005c  lh          $t0, 0x5C($v1)
    ctx->pc = 0x372dc0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x372dc4: 0xc0dc724  jal         func_371C90
    ctx->pc = 0x372DC4u;
    SET_GPR_U32(ctx, 31, 0x372DCCu);
    ctx->pc = 0x372DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372DC4u;
    // 0x372dc8: 0x8469004c  lh          $t1, 0x4C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371C90u, 0x372DC4u, 0x372DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372DCCu;
label_372dcc:
    // 0x372dcc: 0xc0dc70e  jal         func_371C38
    ctx->pc = 0x372DCCu;
    SET_GPR_U32(ctx, 31, 0x372DD4u);
    ctx->pc = 0x372DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372DCCu;
    // 0x372dd0: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371C38u, 0x372DCCu, 0x372DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372DD4u;
label_372dd4:
    // 0x372dd4: 0xc0dc7ac  jal         func_371EB0
    ctx->pc = 0x372DD4u;
    SET_GPR_U32(ctx, 31, 0x372DDCu);
    ctx->pc = 0x372DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372DD4u;
    // 0x372dd8: 0x8e24ccc0  lw          $a0, -0x3340($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371EB0u, 0x372DD4u, 0x372DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372DDCu;
label_372ddc:
    // 0x372ddc: 0x8e24ccc0  lw          $a0, -0x3340($s1)
    ctx->pc = 0x372ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954176)));
    // 0x372de0: 0xc0dc85a  jal         func_372168
    ctx->pc = 0x372DE0u;
    SET_GPR_U32(ctx, 31, 0x372DE8u);
    ctx->pc = 0x372DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372DE0u;
    // 0x372de4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372168u, 0x372DE0u, 0x372DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372DE8u;
label_372de8:
    // 0x372de8: 0x8e23ccc0  lw          $v1, -0x3340($s1)
    ctx->pc = 0x372de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954176)));
    // 0x372dec: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x372decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x372df0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x372df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x372df4: 0xac620048  sw          $v0, 0x48($v1)
    ctx->pc = 0x372df4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
    // 0x372df8: 0x8e29ccc0  lw          $t1, -0x3340($s1)
    ctx->pc = 0x372df8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954176)));
label_372dfc:
    // 0x372dfc: 0x8d220070  lw          $v0, 0x70($t1)
    ctx->pc = 0x372dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 112)));
    // 0x372e00: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x372E00u;
    {
        const bool branch_taken_0x372e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x372E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372E00u;
        // 0x372e04: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372e00) {
            ctx->pc = 0x372E80u;
            goto label_372e80;
        }
    }
    ctx->pc = 0x372E08u;
    // 0x372e08: 0x8d240044  lw          $a0, 0x44($t1)
    ctx->pc = 0x372e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 68)));
    // 0x372e0c: 0x9522005a  lhu         $v0, 0x5A($t1)
    ctx->pc = 0x372e0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 90)));
    // 0x372e10: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x372e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x372e14: 0x862018  mult        $a0, $a0, $a2
    ctx->pc = 0x372e14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x372e18: 0x9523005c  lhu         $v1, 0x5C($t1)
    ctx->pc = 0x372e18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 92)));
    // 0x372e1c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x372e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x372e20: 0x2646cc48  addiu       $a2, $s2, -0x33B8
    ctx->pc = 0x372e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954056));
    // 0x372e24: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x372e24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x372e28: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x372e28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x372e2c: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x372e2cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
    // 0x372e30: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x372e30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x372e34: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x372e34u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x372e38: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x372e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x372e3c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x372e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x372e40: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x372e40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x372e44: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x372E44u;
    {
        const bool branch_taken_0x372e44 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x372E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372E44u;
        // 0x372e48: 0x21938  dsll        $v1, $v0, 4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x372e44) {
            ctx->pc = 0x372E58u;
            goto label_372e58;
        }
    }
    ctx->pc = 0x372E4Cu;
    // 0x372e4c: 0x24a20008  addiu       $v0, $a1, 0x8
    ctx->pc = 0x372e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x372e50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x372E50u;
    {
        const bool branch_taken_0x372e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372E50u;
        // 0x372e54: 0x2103c  dsll32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372e50) {
            ctx->pc = 0x372E5Cu;
            goto label_372e5c;
        }
    }
    ctx->pc = 0x372E58u;
label_372e58:
    // 0x372e58: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x372e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
label_372e5c:
    // 0x372e5c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x372e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x372e60: 0xfc820030  sd          $v0, 0x30($a0)
    ctx->pc = 0x372e60u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 2));
    // 0x372e64: 0x2645cc48  addiu       $a1, $s2, -0x33B8
    ctx->pc = 0x372e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954056));
    // 0x372e68: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x372e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x372e6c: 0x8e23ccc0  lw          $v1, -0x3340($s1)
    ctx->pc = 0x372e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954176)));
    // 0x372e70: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x372e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x372e74: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x372e74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x372e78: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x372E78u;
    {
        const bool branch_taken_0x372e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372E78u;
        // 0x372e7c: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372e78) {
            ctx->pc = 0x372EDCu;
            goto label_372edc;
        }
    }
    ctx->pc = 0x372E80u;
label_372e80:
    // 0x372e80: 0x8d250044  lw          $a1, 0x44($t1)
    ctx->pc = 0x372e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 68)));
    // 0x372e84: 0x2408003c  addiu       $t0, $zero, 0x3C
    ctx->pc = 0x372e84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x372e88: 0x9523005c  lhu         $v1, 0x5C($t1)
    ctx->pc = 0x372e88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 92)));
    // 0x372e8c: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x372e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x372e90: 0x9524005a  lhu         $a0, 0x5A($t1)
    ctx->pc = 0x372e90u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 90)));
    // 0x372e94: 0xa82818  mult        $a1, $a1, $t0
    ctx->pc = 0x372e94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x372e98: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x372e98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x372e9c: 0x2647cc48  addiu       $a3, $s2, -0x33B8
    ctx->pc = 0x372e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954056));
    // 0x372ea0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x372ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x372ea4: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x372ea4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
    // 0x372ea8: 0x42443  sra         $a0, $a0, 17
    ctx->pc = 0x372ea8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 17));
    // 0x372eac: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x372eacu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x372eb0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x372eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x372eb4: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x372eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x372eb8: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x372eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x372ebc: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x372ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x372ec0: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x372ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x372ec4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x372ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x372ec8: 0xfcc20030  sd          $v0, 0x30($a2)
    ctx->pc = 0x372ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 48), GPR_U64(ctx, 2));
    // 0x372ecc: 0x8e23ccc0  lw          $v1, -0x3340($s1)
    ctx->pc = 0x372eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954176)));
    // 0x372ed0: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x372ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x372ed4: 0x481818  mult        $v1, $v0, $t0
    ctx->pc = 0x372ed4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x372ed8: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x372ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_372edc:
    // 0x372edc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x372edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x372ee0: 0xdc830030  ld          $v1, 0x30($a0)
    ctx->pc = 0x372ee0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x372ee4: 0xfc8300c0  sd          $v1, 0xC0($a0)
    ctx->pc = 0x372ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 192), GPR_U64(ctx, 3));
    // 0x372ee8: 0x8e28ccc0  lw          $t0, -0x3340($s1)
    ctx->pc = 0x372ee8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954176)));
    // 0x372eec: 0x8d02006c  lw          $v0, 0x6C($t0)
    ctx->pc = 0x372eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 108)));
    // 0x372ef0: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x372EF0u;
    {
        const bool branch_taken_0x372ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x372EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372EF0u;
        // 0x372ef4: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372ef0) {
            ctx->pc = 0x372FE8u;
            goto label_372fe8;
        }
    }
    ctx->pc = 0x372EF8u;
    // 0x372ef8: 0x8d040044  lw          $a0, 0x44($t0)
    ctx->pc = 0x372ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 68)));
    // 0x372efc: 0x2643cc48  addiu       $v1, $s2, -0x33B8
    ctx->pc = 0x372efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954056));
    // 0x372f00: 0x8507005c  lh          $a3, 0x5C($t0)
    ctx->pc = 0x372f00u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 92)));
    // 0x372f04: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x372f04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x372f08: 0x85060052  lh          $a2, 0x52($t0)
    ctx->pc = 0x372f08u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 82)));
    // 0x372f0c: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x372f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x372f10: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x372f10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372f14: 0x8cab0038  lw          $t3, 0x38($a1)
    ctx->pc = 0x372f14u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x372f18: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x372f18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372f1c: 0x8c490030  lw          $t1, 0x30($v0)
    ctx->pc = 0x372f1cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x372f20: 0x14e60003  bne         $a3, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x372F20u;
    {
        const bool branch_taken_0x372f20 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x372F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372F20u;
        // 0x372f24: 0x8c6a0034  lw          $t2, 0x34($v1) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372f20) {
            ctx->pc = 0x372F30u;
            goto label_372f30;
        }
    }
    ctx->pc = 0x372F28u;
    // 0x372f28: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x372F28u;
    {
        const bool branch_taken_0x372f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372F28u;
        // 0x372f2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372f28) {
            ctx->pc = 0x372F44u;
            goto label_372f44;
        }
    }
    ctx->pc = 0x372F30u;
label_372f30:
    // 0x372f30: 0x8d020064  lw          $v0, 0x64($t0)
    ctx->pc = 0x372f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 100)));
    // 0x372f34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x372F34u;
    {
        const bool branch_taken_0x372f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x372F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372F34u;
        // 0x372f38: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372f34) {
            ctx->pc = 0x372F44u;
            goto label_372f44;
        }
    }
    ctx->pc = 0x372F3Cu;
    // 0x372f3c: 0x52800001  beql        $s4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x372F3Cu;
    {
        const bool branch_taken_0x372f3c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x372f3c) {
            ctx->pc = 0x372F40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x372F3Cu;
            // 0x372f40: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x372F44u;
            goto label_372f44;
        }
    }
    ctx->pc = 0x372F44u;
label_372f44:
    // 0x372f44: 0xad250034  sw          $a1, 0x34($t1)
    ctx->pc = 0x372f44u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 52), GPR_U32(ctx, 5));
    // 0x372f48: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x372f48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x372f4c: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x372f4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x372f50: 0x34840261  ori         $a0, $a0, 0x261
    ctx->pc = 0x372f50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)609);
    // 0x372f54: 0x8e23ccc0  lw          $v1, -0x3340($s1)
    ctx->pc = 0x372f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954176)));
    // 0x372f58: 0x84620052  lh          $v0, 0x52($v1)
    ctx->pc = 0x372f58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x372f5c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x372f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x372f60: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x372f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x372f64: 0xad220054  sw          $v0, 0x54($t1)
    ctx->pc = 0x372f64u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 84), GPR_U32(ctx, 2));
    // 0x372f68: 0xad450034  sw          $a1, 0x34($t2)
    ctx->pc = 0x372f68u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 52), GPR_U32(ctx, 5));
    // 0x372f6c: 0x8e23ccc0  lw          $v1, -0x3340($s1)
    ctx->pc = 0x372f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954176)));
    // 0x372f70: 0x84620052  lh          $v0, 0x52($v1)
    ctx->pc = 0x372f70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x372f74: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x372f74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x372f78: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x372f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x372f7c: 0xad420054  sw          $v0, 0x54($t2)
    ctx->pc = 0x372f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 84), GPR_U32(ctx, 2));
    // 0x372f80: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x372F80u;
    {
        const bool branch_taken_0x372f80 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x372F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372F80u;
        // 0x372f84: 0xfd640060  sd          $a0, 0x60($t3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 11), 96), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372f80) {
            ctx->pc = 0x372FB8u;
            goto label_372fb8;
        }
    }
    ctx->pc = 0x372F88u;
    // 0x372f88: 0x8e24ccc0  lw          $a0, -0x3340($s1)
    ctx->pc = 0x372f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954176)));
    // 0x372f8c: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x372f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x372f90: 0x2643cc48  addiu       $v1, $s2, -0x33B8
    ctx->pc = 0x372f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954056));
    // 0x372f94: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x372f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x372f98: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x372f98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x372f9c: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x372f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x372fa0: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x372fa0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372fa4: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x372fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x372fa8: 0xc0dcc9a  jal         func_373268
    ctx->pc = 0x372FA8u;
    SET_GPR_U32(ctx, 31, 0x372FB0u);
    ctx->pc = 0x372FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372FA8u;
    // 0x372fac: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373268u, 0x372FA8u, 0x372FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372FB0u;
label_372fb0:
    // 0x372fb0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x372FB0u;
    {
        const bool branch_taken_0x372fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x372fb0) {
            ctx->pc = 0x373038u;
            goto label_373038;
        }
    }
    ctx->pc = 0x372FB8u;
label_372fb8:
    // 0x372fb8: 0x8e24ccc0  lw          $a0, -0x3340($s1)
    ctx->pc = 0x372fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954176)));
    // 0x372fbc: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x372fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x372fc0: 0x2643cc48  addiu       $v1, $s2, -0x33B8
    ctx->pc = 0x372fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954056));
    // 0x372fc4: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x372fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x372fc8: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x372fc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x372fcc: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x372fccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x372fd0: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x372fd0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372fd4: 0x8cc50018  lw          $a1, 0x18($a2)
    ctx->pc = 0x372fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x372fd8: 0xc0dcc9a  jal         func_373268
    ctx->pc = 0x372FD8u;
    SET_GPR_U32(ctx, 31, 0x372FE0u);
    ctx->pc = 0x372FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372FD8u;
    // 0x372fdc: 0x8c640014  lw          $a0, 0x14($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373268u, 0x372FD8u, 0x372FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372FE0u;
label_372fe0:
    // 0x372fe0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x372FE0u;
    {
        const bool branch_taken_0x372fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x372fe0) {
            ctx->pc = 0x373038u;
            goto label_373038;
        }
    }
    ctx->pc = 0x372FE8u;
label_372fe8:
    // 0x372fe8: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x372FE8u;
    {
        const bool branch_taken_0x372fe8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x372FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372FE8u;
        // 0x372fec: 0x2642cc48  addiu       $v0, $s2, -0x33B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372fe8) {
            ctx->pc = 0x373018u;
            goto label_373018;
        }
    }
    ctx->pc = 0x372FF0u;
    // 0x372ff0: 0x8d030044  lw          $v1, 0x44($t0)
    ctx->pc = 0x372ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 68)));
    // 0x372ff4: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x372ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x372ff8: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x372ff8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x372ffc: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x372ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373000: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x373000u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373004: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x373004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x373008: 0xc0dcc9a  jal         func_373268
    ctx->pc = 0x373008u;
    SET_GPR_U32(ctx, 31, 0x373010u);
    ctx->pc = 0x37300Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373008u;
    // 0x37300c: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373268u, 0x373008u, 0x373010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373010u;
label_373010:
    // 0x373010: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x373010u;
    {
        const bool branch_taken_0x373010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373010) {
            ctx->pc = 0x373038u;
            goto label_373038;
        }
    }
    ctx->pc = 0x373018u;
label_373018:
    // 0x373018: 0x8d030044  lw          $v1, 0x44($t0)
    ctx->pc = 0x373018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 68)));
    // 0x37301c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x37301cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x373020: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x373020u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x373024: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x373024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373028: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x373028u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37302c: 0x8cc50020  lw          $a1, 0x20($a2)
    ctx->pc = 0x37302cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x373030: 0xc0dcc9a  jal         func_373268
    ctx->pc = 0x373030u;
    SET_GPR_U32(ctx, 31, 0x373038u);
    ctx->pc = 0x373034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373030u;
    // 0x373034: 0x8c44001c  lw          $a0, 0x1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373268u, 0x373030u, 0x373038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373038u;
label_373038:
    // 0x373038: 0xc0dcc66  jal         func_373198
    ctx->pc = 0x373038u;
    SET_GPR_U32(ctx, 31, 0x373040u);
    ctx->pc = 0x373198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373198u, 0x373038u, 0x373040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373040u;
label_373040:
    // 0x373040: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x373040u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373044: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x373044u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x373048: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x373048u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37304c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x37304cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x373050: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x373050u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x373054: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x373054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x373058: 0x3e00008  jr          $ra
    ctx->pc = 0x373058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37305Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373058u;
        // 0x37305c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373060u;
}
