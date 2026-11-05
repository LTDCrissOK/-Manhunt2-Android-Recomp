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

// Function: sub_00201ED0
// Address: 0x201ed0 - 0x2020d0
void sub_00201ED0_0x201ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201ED0_0x201ed0");
#endif

    switch (ctx->pc) {
        case 0x201f20u: goto label_201f20;
        case 0x201f80u: goto label_201f80;
        case 0x201fa8u: goto label_201fa8;
        case 0x201fd0u: goto label_201fd0;
        case 0x201ff8u: goto label_201ff8;
        case 0x202020u: goto label_202020;
        case 0x202048u: goto label_202048;
        case 0x202070u: goto label_202070;
        case 0x202098u: goto label_202098;
        default: break;
    }

    ctx->pc = 0x201ed0u;

    // 0x201ed0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201ed4: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x201ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x201ed8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x201ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x201edc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x201edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201ee0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x201ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x201ee4: 0x240535e3  addiu       $a1, $zero, 0x35E3
    ctx->pc = 0x201ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13795));
    // 0x201ee8: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x201ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x201eec: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x201eecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x201ef0: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x201ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x201ef4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x201ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x201ef8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x201ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x201efc: 0x24830044  addiu       $v1, $a0, 0x44
    ctx->pc = 0x201efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 68));
    // 0x201f00: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x201f00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x201f04: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x201f04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x201f08: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x201f08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x201f0c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x201f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x201f10: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x201f10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x201f14: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x201f14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x201f18: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x201f18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x201f1c: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x201f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
label_201f20:
    // 0x201f20: 0xac65fff0  sw          $a1, -0x10($v1)
    ctx->pc = 0x201f20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967280), GPR_U32(ctx, 5));
    // 0x201f24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x201f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x201f28: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x201f28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x201f2c: 0x0  nop
    ctx->pc = 0x201f2cu;
    // NOP
    // 0x201f30: 0x441fffb  bgez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x201F30u;
    {
        const bool branch_taken_0x201f30 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x201F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F30u;
        // 0x201f34: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201f30) {
            ctx->pc = 0x201F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201f20;
        }
    }
    ctx->pc = 0x201F38u;
    // 0x201f38: 0x24880074  addiu       $t0, $a0, 0x74
    ctx->pc = 0x201f38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 116));
    // 0x201f3c: 0x2487007c  addiu       $a3, $a0, 0x7C
    ctx->pc = 0x201f3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 124));
    // 0x201f40: 0x248a0084  addiu       $t2, $a0, 0x84
    ctx->pc = 0x201f40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
    // 0x201f44: 0x2489009c  addiu       $t1, $a0, 0x9C
    ctx->pc = 0x201f44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 156));
    // 0x201f48: 0x248c00b4  addiu       $t4, $a0, 0xB4
    ctx->pc = 0x201f48u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), 180));
    // 0x201f4c: 0x248b00c4  addiu       $t3, $a0, 0xC4
    ctx->pc = 0x201f4cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 196));
    // 0x201f50: 0x248e00d4  addiu       $t6, $a0, 0xD4
    ctx->pc = 0x201f50u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), 212));
    // 0x201f54: 0x248d00ec  addiu       $t5, $a0, 0xEC
    ctx->pc = 0x201f54u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), 236));
    // 0x201f58: 0x24980104  addiu       $t8, $a0, 0x104
    ctx->pc = 0x201f58u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 4), 260));
    // 0x201f5c: 0x248f011c  addiu       $t7, $a0, 0x11C
    ctx->pc = 0x201f5cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), 284));
    // 0x201f60: 0x24990134  addiu       $t9, $a0, 0x134
    ctx->pc = 0x201f60u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 4), 308));
    // 0x201f64: 0x2491045c  addiu       $s1, $a0, 0x45C
    ctx->pc = 0x201f64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 1116));
    // 0x201f68: 0x24900480  addiu       $s0, $a0, 0x480
    ctx->pc = 0x201f68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x201f6c: 0x240635e3  addiu       $a2, $zero, 0x35E3
    ctx->pc = 0x201f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13795));
    // 0x201f70: 0x24850064  addiu       $a1, $a0, 0x64
    ctx->pc = 0x201f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
    // 0x201f74: 0x24830054  addiu       $v1, $a0, 0x54
    ctx->pc = 0x201f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 84));
    // 0x201f78: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x201f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x201f7c: 0x0  nop
    ctx->pc = 0x201f7cu;
    // NOP
label_201f80:
    // 0x201f80: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x201f80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x201f84: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x201f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x201f88: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x201f88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x201f8c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x201f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x201f90: 0x441fffb  bgez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x201F90u;
    {
        const bool branch_taken_0x201f90 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x201F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F90u;
        // 0x201f94: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201f90) {
            ctx->pc = 0x201F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201f80;
        }
    }
    ctx->pc = 0x201F98u;
    // 0x201f98: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x201f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201f9c: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x201f9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201fa0: 0x240635e3  addiu       $a2, $zero, 0x35E3
    ctx->pc = 0x201fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13795));
    // 0x201fa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x201fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_201fa8:
    // 0x201fa8: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x201fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x201fac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x201facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x201fb0: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x201fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x201fb4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x201fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x201fb8: 0x441fffb  bgez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x201FB8u;
    {
        const bool branch_taken_0x201fb8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x201FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201FB8u;
        // 0x201fbc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201fb8) {
            ctx->pc = 0x201FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201fa8;
        }
    }
    ctx->pc = 0x201FC0u;
    // 0x201fc0: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x201fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201fc4: 0x140182d  daddu       $v1, $t2, $zero
    ctx->pc = 0x201fc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201fc8: 0x240635e3  addiu       $a2, $zero, 0x35E3
    ctx->pc = 0x201fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13795));
    // 0x201fcc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x201fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_201fd0:
    // 0x201fd0: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x201fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x201fd4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x201fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x201fd8: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x201fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x201fdc: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x201fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x201fe0: 0x441fffb  bgez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x201FE0u;
    {
        const bool branch_taken_0x201fe0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x201FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201FE0u;
        // 0x201fe4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201fe0) {
            ctx->pc = 0x201FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201fd0;
        }
    }
    ctx->pc = 0x201FE8u;
    // 0x201fe8: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x201fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201fec: 0x180182d  daddu       $v1, $t4, $zero
    ctx->pc = 0x201fecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201ff0: 0x240635e3  addiu       $a2, $zero, 0x35E3
    ctx->pc = 0x201ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13795));
    // 0x201ff4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x201ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_201ff8:
    // 0x201ff8: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x201ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x201ffc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x201ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x202000: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x202000u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x202004: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x202004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x202008: 0x441fffb  bgez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x202008u;
    {
        const bool branch_taken_0x202008 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20200Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202008u;
        // 0x20200c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202008) {
            ctx->pc = 0x201FF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201ff8;
        }
    }
    ctx->pc = 0x202010u;
    // 0x202010: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x202010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202014: 0x1c0182d  daddu       $v1, $t6, $zero
    ctx->pc = 0x202014u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202018: 0x240635e3  addiu       $a2, $zero, 0x35E3
    ctx->pc = 0x202018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13795));
    // 0x20201c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x20201cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_202020:
    // 0x202020: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x202020u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x202024: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x202024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x202028: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x202028u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x20202c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x20202cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x202030: 0x441fffb  bgez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x202030u;
    {
        const bool branch_taken_0x202030 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x202034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202030u;
        // 0x202034: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202030) {
            ctx->pc = 0x202020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202020;
        }
    }
    ctx->pc = 0x202038u;
    // 0x202038: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x202038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20203c: 0x300182d  daddu       $v1, $t8, $zero
    ctx->pc = 0x20203cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202040: 0x240635e3  addiu       $a2, $zero, 0x35E3
    ctx->pc = 0x202040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13795));
    // 0x202044: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x202044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_202048:
    // 0x202048: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x202048u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x20204c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x20204cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x202050: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x202050u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x202054: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x202054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x202058: 0x441fffb  bgez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x202058u;
    {
        const bool branch_taken_0x202058 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20205Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202058u;
        // 0x20205c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202058) {
            ctx->pc = 0x202048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202048;
        }
    }
    ctx->pc = 0x202060u;
    // 0x202060: 0x27230004  addiu       $v1, $t9, 0x4
    ctx->pc = 0x202060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 25), 4));
    // 0x202064: 0x240535e3  addiu       $a1, $zero, 0x35E3
    ctx->pc = 0x202064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13795));
    // 0x202068: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x202068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20206c: 0x0  nop
    ctx->pc = 0x20206cu;
    // NOP
label_202070:
    // 0x202070: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x202070u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x202074: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x202074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x202078: 0x0  nop
    ctx->pc = 0x202078u;
    // NOP
    // 0x20207c: 0x0  nop
    ctx->pc = 0x20207cu;
    // NOP
    // 0x202080: 0x441fffb  bgez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x202080u;
    {
        const bool branch_taken_0x202080 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x202084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202080u;
        // 0x202084: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202080) {
            ctx->pc = 0x202070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202070;
        }
    }
    ctx->pc = 0x202088u;
    // 0x202088: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x202088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20208c: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x20208cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202090: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x202090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x202094: 0x0  nop
    ctx->pc = 0x202094u;
    // NOP
label_202098:
    // 0x202098: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x202098u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x20209c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x20209cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2020a0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2020a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2020a4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2020a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2020a8: 0x441fffb  bgez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2020A8u;
    {
        const bool branch_taken_0x2020a8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2020ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2020A8u;
        // 0x2020ac: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2020a8) {
            ctx->pc = 0x202098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202098;
        }
    }
    ctx->pc = 0x2020B0u;
    // 0x2020b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2020b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2020b4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2020b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2020b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2020b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2020bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2020BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2020C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2020BCu;
        // 0x2020c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2020BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2020C4u;
    // 0x2020c4: 0x0  nop
    ctx->pc = 0x2020c4u;
    // NOP
    // 0x2020c8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2020c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2020cc: 0x0  nop
    ctx->pc = 0x2020ccu;
    // NOP
    ctx->pc = 0x2020d0u;
}
